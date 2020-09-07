
String p_inicio(){
String pagina = 
String("<html>")+
"<head>"+
"<meta name='viewport' content='width=device-width, initial-scale=1.0'>"+
"<title>W3duck!</title>"+
"<style>"+
"body{"+
"margin:0px;"+
"font-family: fantasy;"+
"}"+
"html{"+
"background:black;"+
"}"+
".panel{"+
"background: #19056a;"+
"padding: 14px;"+
"}"+
".btn, .btn2{"+
"border: none;"+
"background: #000000;"+
"font-size: 14px;"+
"box-shadow: 3px 3px 4px 0px black;"+
"border-radius: 3px;"+
"margin: 1px;"+
"min-width: 25px;"+
"min-height: 31px;"+
"cursor: pointer;"+
"color: white;"+
"border: 1px solid #5f5d5d;"+
"}"+
".btn:hover, .btn2:hover{"+
"opacity:0.5;"+
"}"+
"textarea{"+
"width:100%;"+
"height:10%;"+
"}"+
"h4{"+
"color: white;"+
"margin: 0px;"+
"font-size: 20px;"+
"text-shadow: 0px -8px 19px black;"+
"}"+
".hide{"+
"display:none;"+
"}"+
".btn-menu{"+
"background: #19056a00;"+
"border: none;"+
"color: white;"+
"padding: 13px;"+
"font-size: 16px;"+
"cursor: pointer;"+
"border-radius: 3px;"+
"box-shadow: 0px 0px 5px 0px white;"+
"}"+
".btn-menu:hover{"+
"opacity:0.5;"+
"}"+
".bar-menu{"+
"padding: 10px;"+
"text-align: center;"+
"border-bottom: 1px solid #4c29da;"+
"background-image: linear-gradient(180deg, #19056a, transparent);"+
"}"+
".logo{"+
"float: left;"+
"color: white;"+
"font-family: fantasy;"+
"font-size: 34px;"+
"text-shadow: 0px 0px 19px #a190ec;"+
"}"+
"#script{"+
"height:310px;"+
"background: black;"+
"color: lime;"+
"}"+
"#texto{"+
"background: black;"+
"color: lime;"+
"}"+
"@media (max-width: 411px) {"+
".logo{"+
"line-height: 2.1;"+
"width: 100%;"+
"font-size: 28px;"+
"}"+
"}"+
".select{"+
"background: #19056a;"+
"}"+
"#btn_del{"+
"background:red;"+
"}"+
"#btn_send_script, #btn_send_text{"+
"background:green;"+
"}"+
"</style>"+
"</head>"+
"<body>"+
"<div class='bar-menu'>"+
"<span class='logo'>W3Duck!</span>"+
"<button onclick='seleccionar(1,this)'   class='btn-menu'>TECLADO</button>"+
"<button onclick='seleccionar(2,this)'   class='btn-menu'>TEXTO</button>"+
"<button onclick='seleccionar(3,this)'  class='btn-menu select'>PLAYLOAD</button>"+
"</div>"+
"<div class='hide panel' id='panelteclado'>"+
"<div class='fila'>"+
"<button data-val='KF1END' class='btn'>F1</button>"+
"<button data-val='KF2END' class='btn'>F2</button>"+
"<button data-val='KF3END' class='btn'>F3</button>"+
"<button data-val='KF4END' class='btn'>F4</button>"+
"<button data-val='KF5END' class='btn'>F5</button>"+
"<button data-val='KF6END' class='btn'>F6</button>"+
"<button data-val='KF7END' class='btn'>F7</button>"+
"<button data-val='KF8END' class='btn'>F8</button>"+
"<button data-val='KF9END' class='btn'>F9</button>"+
"<button data-val='KF10END' class='btn'>F10</button>"+
"<button data-val='KF11END' class='btn'>F11</button>"+
"<button data-val='KF12END' class='btn'>F12</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='L1END' class='btn'>1</button>"+
"<button data-val='L2END' class='btn'>2</button>"+
"<button data-val='L3END' class='btn'>3</button>"+
"<button data-val='L4END' class='btn'>4</button>"+
"<button data-val='L5END' class='btn'>5</button>"+
"<button data-val='L6END' class='btn'>6</button>"+
"<button data-val='L7END' class='btn'>7</button>"+
"<button data-val='L8END' class='btn'>8</button>"+
"<button data-val='L9END' class='btn'>9</button>"+
"<button data-val='L0END' class='btn'>0</button>"+
"<button data-val='L END' class='btn' >&nbsp;</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='LqEND' class='btn'>Q</button>"+
"<button data-val='LwEND' class='btn'>W</button>"+
"<button data-val='LeEND' class='btn'>E</button>"+
"<button data-val='LrEND' class='btn'>R</button>"+
"<button data-val='LtEND' class='btn'>T</button>"+
"<button data-val='LyEND' class='btn'>Y</button>"+
"<button data-val='LuEND' class='btn'>U</button>"+
"<button data-val='LiEND' class='btn'>I</button>"+
"<button data-val='LoEND' class='btn'>O</button>"+
"<button data-val='LpEND' class='btn'>P</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='LaEND' class='btn'>A</button>"+
"<button data-val='LsEND' class='btn'>S</button>"+
"<button data-val='LdEND' class='btn'>D</button>"+
"<button data-val='LfEND' class='btn'>F</button>"+
"<button data-val='LgEND' class='btn'>G</button>"+
"<button data-val='LhEND' class='btn'>H</button>"+
"<button data-val='LjEND' class='btn'>J</button>"+
"<button data-val='LkEND' class='btn'>K</button>"+
"<button data-val='LlEND' class='btn'>L</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='LzEND' class='btn'>Z</button>"+
"<button data-val='LxEND' class='btn'>X</button>"+
"<button data-val='LcEND' class='btn'>C</button>"+
"<button data-val='LvEND' class='btn'>V</button>"+
"<button data-val='LbEND' class='btn'>B</button>"+
"<button data-val='LnEND' class='btn'>N</button>"+
"<button data-val='LmEND' class='btn'>M</button>"+
"<button data-val='KBACKSPACEEND' class='btn' style='border: 1px solid;background:red'>X"+
"</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='L.END' class='btn'>.</button>"+
"<button data-val='L,END' class='btn'>,</button>"+
"<button data-val='L;END' class='btn'>;</button>"+
"<button data-val='L:END' class='btn'>:</button>"+
"<button data-val='L?END' class='btn'>?</button>"+
"<button data-val='L!END' class='btn'>!</button>"+
"<button data-val='L\'END' class='btn'>'</button>"+
"<button data-val='L\"END' class='btn'>\"</button>"+
"<button data-val='L+END' class='btn'>+</button>"+
"<button data-val='L-END' class='btn'>-</button>"+
"<button data-val='L*END' class='btn'>*</button>"+
"<button data-val='L_END' class='btn'>_</button>"+
"<button data-val='L#END' class='btn'>#</button>"+
"<button data-val='L@END' class='btn'>@</button>"+
"<button data-val='L/END' class='btn'>/</button>"+
"<button data-val='L\\END' class='btn'>&#92;</button>"+
"<button data-val='L(END' class='btn'>(</button>"+
"<button data-val='L)END' class='btn'>)</button>"+
"<button data-val='L{END' class='btn'>{</button>"+
"<button data-val='L}END' class='btn'>}</button>"+
"<button data-val='L%END' class='btn'>%</button>"+
"<button data-val='L=END' class='btn'>=</button>"+
"<button data-val='L$END' class='btn'>$</button>"+
"<button data-val='L[END' class='btn'>[</button>"+
"<button data-val='L]END' class='btn'>]</button>"+
"<button data-val='L&END' class='btn'>&#38;</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='KESCEND' class='btn'>ESC</button>"+
"<button data-val='KTABEND' class='btn'>TAB</button>"+
"<button data-val='KCTRLEND' class='btn'>CTRL</button>"+
"<button data-val='KGUIEND' class='btn'>WIN</button>"+
"<button data-val='KALTEND' class='btn'>ALT</button>"+
"<button data-val='KSHIFTEND' class='btn'>SHIFT</button>"+
"<button data-val='KENTEREND' class='btn'>ENTER</button>"+
"<button data-val='KDELETEEND' class='btn'>DEL</button>"+
"</div>"+
"<div class='fila'>"+
"<button data-val='KLEFTEND' class='btn'>IZQ</button>"+
"<button data-val='KUPEND' class='btn'>ARR</button>"+
"<button data-val='KRIGHTEND' class='btn'>DER</button>"+
"<button data-val='KDOWNEND' class='btn'>ABA</button>"+
"</div>"+
"</div>"+
"<div class='hide panel' style='margin-top:10px' id='paneltexto'>"+
"<div class='fila'>"+
"<textarea id='texto'></textarea>"+
"<button class='btn2' id='btn_send_text'>Enviar</button>"+
"<button onclick='clean(1);' class='btn2'  id='btn_del'>Borrar</button>"+
"</div>"+
"</div>"+
"<div class='panel' style='margin-top:10px' id='panelplayload'>"+
"<div class='fila'>"+
"<textarea id='script'></textarea>"+
"<div>"+
"<button class='btn2' id='btn_send_script'>Enviar</button>"+
"<button onclick='clean(2);' class='btn2'  id='btn_del'>Borrar</button>"+
"</div>"+
"</div>"+
"</div>"+
"<script>"+
"var buttons = document.querySelectorAll('.btn-menu');"+
"function seleccionar(n,btn){"+
"if(n == 1){"+
"document.getElementById('paneltexto').classList.add('hide');"+
"document.getElementById('panelteclado').classList.remove('hide');"+
"document.getElementById('panelplayload').classList.add('hide');"+
"for(var i=0;i<buttons.length;i++){"+
"buttons[i].classList.remove('select');"+
"}"+
"btn.classList.add('select');"+
"}"+
"if(n == 2){"+
"document.getElementById('paneltexto').classList.remove('hide');"+
"document.getElementById('panelteclado').classList.add('hide');"+
"document.getElementById('panelplayload').classList.add('hide');"+
"for(var i=0;i<buttons.length;i++){"+
"buttons[i].classList.remove('select');"+
"}"+
"btn.classList.add('select');"+
"}"+
"if(n == 3){"+
"document.getElementById('paneltexto').classList.add('hide');"+
"document.getElementById('panelteclado').classList.add('hide');"+
"document.getElementById('panelplayload').classList.remove('hide');"+
"for(var i=0;i<buttons.length;i++){"+
"buttons[i].classList.remove('select');"+
"}"+
"btn.classList.add('select');"+
"}"+
"}"+
"function clean(i){"+
"if(i == 1){"+
"document.getElementById('texto').value = '';"+
"}else{"+
"document.getElementById('script').value = '';"+
"}"+
"}"+
"function ajax(param) {"+
"if(window.XMLHttpRequest) {"+
"connection = new XMLHttpRequest();"+
"}"+
"connection.onreadystatechange = response;"+
"connection.open('GET', '/prueba?cmd='+param);"+
"connection.setRequestHeader('Content-Type','application/x-www-form-urlencoded');"+
"connection.send();"+
"}"+
"function response() {"+
"if(connection.readyState == 4) {"+
"var ok=1;"+
"}"+
"};"+
"var botones = document.querySelectorAll('.btn');"+
"for(var i = 0;i<botones.length;i++){"+
"botones[i].onclick=function(){"+
"ajax(encodeURIComponent(this.dataset.val));"+
"}"+
"};"+
"document.getElementById('btn_send_text').onclick =  function(){"+
"var texto = document.getElementById('texto').value;"+
"ajax('T'+texto+'END');"+
"};"+
"var lineas;"+
"var retorno;"+
"document.getElementById('btn_send_script').onclick =  function(){"+
"var texto = document.getElementById('script').value;"+
"lineas = texto.split('\\n');"+
"retorno = 'C';"+
"for(var i = 0;i< lineas.length;i++){"+
"retorno+= lineas[i] + '|';"+
"}"+
"retorno+='END';"+
"retorno = encodeURIComponent(retorno);"+
"ajax(retorno);"+
"};"+
"</script>"+
"</body>"+
"</html>";

return pagina;
  
}
