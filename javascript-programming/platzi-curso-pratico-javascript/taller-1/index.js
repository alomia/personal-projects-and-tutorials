function crearElementoHTML(etiqueta, contenido, ubicacion, id) {
  const p = document.createElement(etiqueta);
  const text = document.createTextNode(contenido);
  p.appendChild(text);
  document.getElementById(ubicacion).appendChild(p).id = id;
}

function eliminarEtiquetaPorId(id) {
  const etiqueta = document.getElementById(id);

  if (typeof etiqueta != "undefined" && etiqueta != null) {
    etiqueta.remove();
  }
}

// Codigo del cuadrado
function perimetroCuadrado(lado) {
  return lado * 4;
}

function areaCuadrado(lado) {
  return lado * lado;
}

// Codigo del triangulo
function perimetroTriangulo(lado1, lado2, base) {
  return lado1 + lado2 + base;
}

function areaTriangulo(base, altura) {
  return (base * altura) / 2;
}

// Codigo del circulo
function diametroCirculo(radio) {
  return radio * 2;
}

function perimetroCirculo(radio) {
  const diametro = diametroCirculo(radio);

  return diametro * Math.PI;
}

function areaCirculo(radio) {
  return radio * radio * Math.PI;
}

// interacción con el HTML

// C U A D R A D O
function mostrarPerimetroCuadrado() {
  const input = document.getElementById("inputCuadrado");
  const value = input.value;

  const resultado = perimetroCuadrado(value);

  eliminarEtiquetaPorId("resultadoCuadrado");
  crearElementoHTML("p", resultado, "formCuadrado", "resultadoCuadrado");
}

function mostrarAreaCuadrado() {
  const input = document.getElementById("inputCuadrado");
  const value = input.value;

  const resultado = areaCuadrado(value);

  eliminarEtiquetaPorId("resultadoCuadrado");
  crearElementoHTML("p", resultado, "formCuadrado", "resultadoCuadrado");
}

// T R I A N G U L O
function mostrarPerimetroTriangulo() {
  const ladoUno = Number(document.getElementById("inputTrianguloLadoUno").value);
  const ladoDos = Number(document.getElementById("inputTrianguloLadoDos").value);
  const base = Number(document.getElementById("inputTrianguloBase").value);

  const perimetro = perimetroTriangulo(ladoUno, ladoDos, base);

  eliminarEtiquetaPorId("resultadoTriangulo");
  crearElementoHTML("p", perimetro, "formTriangulo", "resultadoTriangulo");
}

function mostrarAreaTriangulo() {
  const base = document.getElementById("inputTrianguloBase").value;
  const altura = document.getElementById("inputTrianguloAltura").value;

  const area = areaTriangulo(base, altura);

  eliminarEtiquetaPorId("resultadoTriangulo");
  crearElementoHTML("p", area, "formTriangulo", "resultadoTriangulo");
}

// C I R C U L O
function mostrarDiametroCirculo() {
  const radio = document.getElementById("inputRadioCirculo").value;

  const diametro = diametroCirculo(radio);

  eliminarEtiquetaPorId("resultadoCirculo");
  crearElementoHTML("p", diametro, "formCirculo", "resultadoCirculo");
}

function mostrarPerimetroCirculo() {
  const radio = document.getElementById("inputRadioCirculo").value;

  const perimetro = perimetroCirculo(radio).toFixed(2);

  eliminarEtiquetaPorId("resultadoCirculo");
  crearElementoHTML("p", perimetro, "formCirculo", "resultadoCirculo");
}

function mostrarAreaCirculo() {
  const radio = document.getElementById("inputRadioCirculo").value;

  const area = areaCirculo(radio).toFixed(2);

  eliminarEtiquetaPorId("resultadoCirculo");
  crearElementoHTML("p", area, "formCirculo", "resultadoCirculo");
}
