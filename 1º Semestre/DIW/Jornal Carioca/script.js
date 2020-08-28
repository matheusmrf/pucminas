const API_KEY = "1562820b9cfb4eb1a8cee664b129c26a";

$("#myTab a").click(function (e) {
  e.preventDefault();
  $(this).tab("show");
});

// $(window).load(function () {
//   var boxheight = $("#myCarousel .carousel-inner").innerHeight();
//   var itemlength = $("#myCarousel .item").length;
//   var triggerheight = Math.round(boxheight / itemlength + 1);
//   $("#myCarousel .list-group-item").outerHeight(triggerheight);
// });

// var monthNames = [
//   "January",
//   "February",
//   "March",
//   "April",
//   "May",
//   "June",
//   "July",
//   "August",
//   "September",
//   "October",
//   "November",
//   "December",
// ];
// var dayNames = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"];

// var newDate = new Date();
// newDate.setDate(newDate.getDate() + 1);
// $("#Date").html(
//   dayNames[newDate.getDay()] +
//     ", " +
//     newDate.getDate() +
//     " " +
//     monthNames[newDate.getMonth()] +
//     " " +
//     newDate.getFullYear()
// );

// function exibeNoticias() {
//   let divTela = document.getElementById("tela");
//   let texto = "";

//   // Montar texto HTML das noticias
//   let dados = JSON.parse(this.responseText);
//   for (i = 0; i < dados.articles.length; i++) {
//     let noticia = dados.articles[i];
//     let data = new Date(noticia.publishedAt);

//     texto =
//       texto +
//       `
//             <div class="box-noticia">
//                 <img src="${noticia.urlToImage}" alt="">
//                 <span class="titulo">${noticia.title}</span><br>
//                 <span class="creditos">${data.toLocaleDateString()} -
//                     ${noticia.source.name} -
//                     ${noticia.author}</span><br>
//                 <span class="text">
//                 ${noticia.content} <a href="${noticia.url}">Leia mais ...</a>
//                 </span>
//             </div>
//         `;
//   }

//   // Preencher a DIV com o texto HTML
//   divTela.innerHTML = texto;
// }

function executaPesquisa() {
  let query = document.getElementById("txtPesquisa").value;

  requestApi(query);
}

function requestApi(query, buildNews) {
  let xhr = new XMLHttpRequest();
  xhr.onload = buildNews;
  xhr.open(
    "GET",
    `https://newsapi.org/v2/everything?q=${query}&apiKey=${API_KEY}`
  );
  xhr.send();
}

function buildCoronaNews() {
  let divTela = document.getElementById("cards");
  let texto = "";

  // Montar texto HTML das noticias
  let dados = JSON.parse(this.responseText);
  for (i = 1; i < 5; i++) {
    let noticia = dados.articles[i];
    let data = new Date(noticia.publishedAt);

    texto =
      texto +
      `
      <div class="col-lg-6 card">
      <div class="card"> 
      <div className="covid-img">
        <img class="img-fluid covid-img" src="${noticia.urlToImage}" alt="">
      </div>
        <div class="card-body">
          <div class="news-title"><a href="${noticia.url}">
              <h2 class=" title-small">${noticia.title}</h2>
            </a></div>
          <p class="card-text">${noticia.content}</p>
          <p class="card-text"><small class="text-time"><em>${data.toLocaleDateString()}</em></small></p>
        </div>
      </div>
    </div>          
        `;
  }

  // Preencher a DIV com o texto HTML
  divTela.innerHTML = texto;
}

window.onload = () => requestApi("Covid", buildCoronaNews);

// document
//   .getElementById("btnPesquisa")
//   .addEventListener("click", executaPesquisa);
