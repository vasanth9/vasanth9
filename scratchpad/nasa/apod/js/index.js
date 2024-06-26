fetch(`https://api.nasa.gov/planetary/apod?api_key=${window.API_KEY}&thumbs=true`)
.then((response)=>{
	const XRatelimitRemaining = response.headers.get('X-Ratelimit-Remaining');
	const rateLimit           = document.getElementById("rateLimit");
	rateLimit.innerHTML 	  = XRatelimitRemaining;
	let color = "red";
        if(1500 < XRatelimitRemaining) {
		color = "green";
	} else if(500 < XRatelimitRemaining) {
		color = "yellow";
	}
	rateLimit.style.color = color;

	return response.json();
})
.then((response)=>{
	/* Sample Response {
    "copyright": "Xin Long",
    "date": "2024-05-31",
    "explanation": "Made with narrowband filters, this cosmic snapshot covers a field of view over twice as wide as the full Moon within the boundaries of the constellation Cygnus. It highlights the bright edge of a ring-like nebula traced by the glow of ionized hydrogen and oxygen gas. Embedded in the region's expanse of interstellar clouds, the complex, glowing arcs are sections of shells of material swept up by the wind from Wolf-Rayet star WR 134, brightest star near the center of the frame. Distance estimates put WR 134 about 6,000 light-years away, making the frame over 100 light-years across. Shedding their outer envelopes in powerful stellar winds, massive Wolf-Rayet stars have burned through their nuclear fuel at a prodigious rate and end this final phase of massive star evolution in a spectacular supernova explosion. The stellar winds and final supernova enrich the interstellar material with heavy elements to be incorporated in future generations of stars.",
    "hdurl": "https://apod.nasa.gov/apod/image/2405/NebulousRealmofWR134_2048.png",
    "media_type": "image",
    "service_version": "v1",
    "title": "The Nebulous Realm of WR 134",
    "url": "https://apod.nasa.gov/apod/image/2405/NebulousRealmofWR134_1024.png"
}
	 */

	const {url, title, date, explanation, copyright, media_type} = response;
        const Title = document.getElementById("title");
	const Image = document.getElementById("image");
        const DateO = document.getElementById("date");
	const Description = document.getElementById("description");
	const CopyRight = document.getElementById("copyRight");
	const VideoSource = document.getElementById("videoSource");
	


	Title.innerHTML = title;
	if("image"==media_type) {
	Image.src = url;
	Image.style.display = "block";
	} else if("video" == media_type) {
		// Video.poster = response.thumbnail_url;
		VideoSource.src = url;
		VideoSource.style.display = "block";
	}
	DateO.innerHTML = date;
	Description.innerHTML = explanation;
	CopyRight.innerHTML = `CopyRight&copy; : ${copyright}`; 

}).catch((err)=>console.log("Error occured while fetch the response from Nasa", err))
