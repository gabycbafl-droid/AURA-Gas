# Hardware de AURA-Gas

## Descripción

AURA-Gas es un prototipo de detección de gases que utiliza un ESP32 y un sensor MQ-2 para identificar la presencia de gases o humo y activar señales de alerta.

## Componentes utilizados

- **ESP32:** procesa las lecturas del sensor y controla los demás componentes.
- **Sensor MQ-2:** detecta la presencia de determinados gases y humo.
- **Servomotor SG90:** realiza un movimiento demostrativo como parte del sistema de respuesta.
- **Buzzer:** genera una alerta sonora.
- **LED rojo y LED verde:** permiten representar visualmente los estados del sistema.
- **Protoboards:** facilitan el montaje del circuito.
- **Cables jumper:** conectan los componentes.
- **Cable USB:** permite programar y alimentar la placa.

## Funcionamiento general

El sensor MQ-2 detecta cambios en la concentración de gases. El ESP32 procesa sus lecturas y, según el umbral configurado en el programa, activa las señales de alerta y el movimiento demostrativo del servomotor.

## Diagrama de conexiones

En esta sección se incorporará el diagrama de conexiones del prototipo, verificando que coincida con el montaje físico y los pines utilizados en el código.

## Observación

Este proyecto es un prototipo educativo y no reemplaza un detector certificado ni garantiza el cierre seguro de una válvula de gas.
