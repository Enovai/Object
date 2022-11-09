//Credit: Most of this was made using the template given and p5.serialcontrol starter code
//I also looked up a lot of references in the p5js references section.
let serial;
let latestData = "waiting for data";

function setup() {
  createCanvas(windowWidth, windowHeight);

  serial = new p5.SerialPort();

  serial.list();
  serial.open("/dev/tty.usbmodem141301");

  serial.on("connected", serverConnected);

  serial.on("list", gotList);

  serial.on("data", gotData);

  serial.on("error", gotError);

  serial.on("open", gotOpen);

  serial.on("close", gotClose);
  createCanvas(285, 245);
}

function serverConnected() {
  print("Connected to Server");
}

function gotList(thelist) {
  print("List of Serial Ports:");

  for (let i = 0; i < thelist.length; i++) {
    print(i + " " + thelist[i]);
  }
}

function gotOpen() {
  print("Serial Port is Open");
}

function gotClose() {
  print("Serial Port is Closed");
  latestData = "Serial Port is Closed";
}

function gotError(theerror) {
  print(theerror);
}

function gotData() {
  let currentString = serial.readLine();
  trim(currentString);
  if (!currentString) return;
  console.log(currentString);
  latestData = currentString;
}

function draw() {
  background(3,169,244);
  fill(0, 0, 0);
  text(latestData, 10, 10);
  array = split(latestData, ",");
  x = array[0];
  bounce=array[1];
  let c = color(255,0,0);
  fill(c);
  noStroke();
  rect(170,200,20,100);
  rect(75,160,20,140);

  let r = color(0,0,0);
  fill(r);
  noStroke();
  if(bounce>=90)
  {
    rect(x, 215, 30, 30);
  }
  else
  {
      rect(x, 100, 30, 30);
  }
 
}
