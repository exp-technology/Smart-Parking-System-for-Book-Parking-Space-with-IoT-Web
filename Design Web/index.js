var syarat1,syarat2,syarat3,syarat4,syarat5,syarat6,syarat7,syarat8,syarat9,syarat10;


var A011 = document.getElementById("A011");
var A022 = document.getElementById("A022");
var A033 = document.getElementById("A033");
var A044 = document.getElementById("A044");
var A055 = document.getElementById("A055");


var B011 = document.getElementById("B011");
var B022 = document.getElementById("B022");
var B033 = document.getElementById("B033");
var B044 = document.getElementById("B044");
var B055 = document.getElementById("B055");

var kon_A01 = "  A01 \n  ";
var kon_A02 = "  A02 \n  ";
var kon_A03 = "  A03 \n  ";
var kon_A04 = "  A04 \n  ";
var kon_A05 = "  A05 \n  ";

var kon_B01 = "  B01 \n  ";
var kon_B02 = "  B02 \n  ";
var kon_B03 = "  B03 \n  ";
var kon_B04 = "  B04 \n  ";
var kon_B05 = "  B05 \n  ";
var isi = "Terisi";
var kosong = "Kosong";

var kon1 = document.getElementById("A01_kondisi");
var kon2 = document.getElementById("A02_kondisi");
var kon3 = document.getElementById("A03_kondisi");
var kon4 = document.getElementById("A04_kondisi");
var kon5 = document.getElementById("A05_kondisi");

var kon6 = document.getElementById("B01_kondisi");
var kon7 = document.getElementById("B02_kondisi");
var kon8 = document.getElementById("B03_kondisi");
var kon9 = document.getElementById("B04_kondisi");
var kon10 = document.getElementById("B05_kondisi");


var jml_sedia = document.getElementById("jml_sedia1");
var jml_dalam = document.getElementById("jml_dalam1");


///Dari file yang satu mengambil data satu satu
var referensi_mendengar =  firebase.database().ref().child("A01");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat1 = datasnapshot.val();
// window.alert(syarat1);

if(syarat1 == 1){
	A011.style.background = "red";	
	
	kon1.innerHTML = kon_A01 + isi;	
}
else{
	A011.style.background = "green";	
	
	kon1.innerHTML = kon_A01 + kosong;	
	}
	
});


var referensi_mendengar =  firebase.database().ref().child("A02");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat2 = datasnapshot.val();


if(syarat2 == 1){
	A022.style.background = "red";	
	kon2.innerHTML = kon_A02 + isi;	
}
else{
	A022.style.background = "green";	
	kon2.innerHTML = kon_A02 + kosong;	
}
	
});


var referensi_mendengar =  firebase.database().ref().child("A03");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat3 = datasnapshot.val();
// window.alert(syarat1);

if(syarat3 == 1){
	A033.style.background = "red";	
	
	kon3.innerHTML = kon_A03 + isi;	
}
else{
	A033.style.background = "green";	
	
	kon3.innerHTML = kon_A03 + kosong;	
	}
	
});


var referensi_mendengar =  firebase.database().ref().child("A04");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat4 = datasnapshot.val();


if(syarat4 == 1){
	A044.style.background = "red";	
	kon4.innerHTML = kon_A04 + isi;	
}
else{
	A044.style.background = "green";	
	kon4.innerHTML = kon_A04 + kosong;	
}
	
});

var referensi_mendengar =  firebase.database().ref().child("A05");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat5 = datasnapshot.val();


if(syarat5 == 1){
	A055.style.background = "red";	
	kon5.innerHTML = kon_A05 + isi;	
}
else{
	A055.style.background = "green";	
	kon5.innerHTML = kon_A05 + kosong;	
}
	
});

/// di lantai 2
var referensi_mendengar =  firebase.database().ref().child("B01");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat6 = datasnapshot.val();
// window.alert(syarat1);

if(syarat6 == 1){
	B011.style.background = "red";	
	
	kon6.innerHTML = kon_B01 + isi;	
}
else{
	B011.style.background = "green";	
	
	kon6.innerHTML = kon_B01 + kosong;	
	}
	
});


var referensi_mendengar =  firebase.database().ref().child("B02");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat7 = datasnapshot.val();


if(syarat7 == 1){
	B022.style.background = "red";	
	kon7.innerHTML = kon_B02 + isi;	
}
else{
	B022.style.background = "green";	
	kon7.innerHTML = kon_B02 + kosong;	
}
	
});


var referensi_mendengar =  firebase.database().ref().child("B03");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat8 = datasnapshot.val();
// window.alert(syarat1);

if(syarat8 == 1){
	B033.style.background = "red";	
	
	kon8.innerHTML = kon_B03 + isi;	
}
else{
	B033.style.background = "green";	
	
	kon8.innerHTML = kon_B03 + kosong;	
	}
	
});


var referensi_mendengar =  firebase.database().ref().child("B04");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat9 = datasnapshot.val();


if(syarat9 == 1){
	B044.style.background = "red";	
	kon9.innerHTML = kon_B04 + isi;	
}
else{
	B044.style.background = "green";	
	kon9.innerHTML = kon_B04 + kosong;	
}
	
});

var referensi_mendengar =  firebase.database().ref().child("B05");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 syarat10 = datasnapshot.val();


if(syarat10 == 1){
	B055.style.background = "red";	
	kon10.innerHTML = kon_B05 + isi;
	
}
else{
	B055.style.background = "green";	
	kon10.innerHTML = kon_B05 + kosong;	
}
	
});

var referensi_mendengar =  firebase.database().ref().child("tersedia");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 jml_tersedia = datasnapshot.val();

jml_sedia.innerText = jml_tersedia + "/10";
	
});

var referensi_mendengar =  firebase.database().ref().child("kondisi_di_dalam");
referensi_mendengar.on( 'value' ,function(datasnapshot){
 jml_didalam = datasnapshot.val();

jml_dalam.innerText = jml_didalam + "/10";
	
});



function submitClick(){
	jml_sedia.innerText = "9";
	jml_dalam.innerText = "19";
	//A011.style.background = "red";
	pengisi_lahan = syarat1 + syarat2 + syarat3 + syarat4 + syarat5 + syarat6 + syarat7 + syarat8 + syarat9 + syarat10;
	eh = pengisi_lahan.toString();
	window.alert(eh);
	
}