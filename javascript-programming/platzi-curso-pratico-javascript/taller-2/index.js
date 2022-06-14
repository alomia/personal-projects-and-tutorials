function calcularDescuento(precio, descuento) {
  const porcentajeDescuento = (descuento * precio) / 100;
  return precio - porcentajeDescuento;
}

function eliminarEtiquetaPorId(id) {
  const etiqueta = document.getElementById(id);

  if (typeof etiqueta != "undefined" && etiqueta != null) {
    etiqueta.remove();
  }
}

function mostrarDescuento() {
  const inputPrecio = document.getElementById("inputPrecio");
  const inputDescuento = document.getElementById("inputDescuento");

  const precio = inputPrecio.value;
  const descuento = inputDescuento.value;

  eliminarEtiquetaPorId("descuento");

  // crea una nueva etiqueta
  const p = document.createElement("p");
  const text = document.createTextNode(`$${calcularDescuento(precio, descuento)}`);
  p.appendChild(text);
  document.getElementById("formDescuento").appendChild(p).id = "descuento";
}
