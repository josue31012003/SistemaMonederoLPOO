#include "SerialController.h"
//Cambiar de acuerdo al puerto COM
using namespace SistemaMonederoController;

String^ SerialController::ObtenerPuertoSerial()
{
    return "COM34";

}
String^ SerialController::ObtenerPuertoSerial2()
    {
       return "COM10";
    }
