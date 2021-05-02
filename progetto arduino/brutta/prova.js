// 1-->pagina di caricamento ****PS modificare le classi corpo e caricamento in ID 
document.getElementById("corpo").style.display = "none"; // imposto trammite il javascript lo stile display none che toglie il contenuto 
// ps potevo mettere lo stile visibility:hidden la differenza sta che nel hidden lo nascondo ma occupa comunque lo spazio 
// invece il dispaly none toglie proprio lo spazio praticamente lo elimina momentaneamente ***PS si può usare solo su ID e non CLASS
setTimeout(() => {  document.getElementById("corpo").style.display = "block"; }, 2000); // il setTimeout serve per far accadere qualcosa
// dopo un periodo di tempo specificato es 2000 == 2secondi e quello che è scritto tra le parentesi verrà fatto dopo 2 secondi 
// in questo caso vado ad aggiungere lo stile display block che è il contrario di display none quindi fa apparire le cose 
setTimeout(() => {  document.getElementById("caricamento").style.display = "none"; }, 2000);
// dopo due secondi faccio anche sparire il logo!!!! ATTENZIONE che le istruzioni si eseguono in parallelo quindi i due setTimeout 
// vengono eseguiti in parallelo non prima il primo e dopo 2 secondi il secondo ma in contemporanea 




