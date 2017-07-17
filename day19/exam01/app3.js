const dgram = require("dgram");
const udp_soket = dgram.createSocket("udp4");

udp_soket.on("message", function (msg, rinfo) {
	console.log(rinfo.address + ":" + rinfo.port + ":" + msg);

	strMsg = "nice to meet u" + msg;

	udp_soket.send(Buffer(strMsg), 0, strMsg.length, rinfo.port, rinfo.address);

});

udp_soket.bind(3333);
console.log('server binding at 3333');