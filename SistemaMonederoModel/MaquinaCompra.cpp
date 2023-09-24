#include "MaquinaCompra.h"

using namespace SistemaMonederoModel;

MaquinaCompra::MaquinaCompra() {

}
MaquinaCompra::MaquinaCompra(int Codigo, double PrecioProducto, String^ FechaCompra, String^ ListaProductos, int CantProductos, String^ UbicacionMaquinaCompra) {
	this->Codigo = Codigo;
	this->PrecioProducto = PrecioProducto;
	this->FechaCompra = FechaCompra;
	this->ListaProductos = ListaProductos;
	this->CantProductos = CantProductos;
	this->UbicacionMaquinaCompra = UbicacionMaquinaCompra;


}