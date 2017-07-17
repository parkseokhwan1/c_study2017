const dgram = require("dgram");
const udp_soket = dgram.createSocket("udp4");

udp_soket.on("message", function (msg, rinfo) {
	console.log(rinfo.address + ":" + rinfo.port + ":" + msg);
	process.exit();
});

strMsg = "hello udp"
udp_soket.send(Buffer(strMsg), 0, strMsg.length, 3333, '192.168.100.156');