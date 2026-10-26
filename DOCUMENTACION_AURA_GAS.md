# AURA-Gas

**Prototipo de detección de gas con ESP32 y sensor MQ-2**

## Descripción
AURA-Gas es un proyecto académico que busca demostrar cómo detectar lecturas asociadas con gases y activar alertas automáticas mediante componentes electrónicos.

## Objetivo
Construir un prototipo que lea un sensor MQ-2 y active señales visuales, sonoras y un movimiento de servomotor cuando la lectura alcance el umbral programado.

## Componentes
- **ESP32:** procesa las lecturas y controla el sistema.
- **Sensor MQ-2:** detecta ciertos gases y vapores.
- **LED rojo y verde:** indican el estado del sistema.
- **Buzzer:** genera una alerta sonora.
- **Servomotor:** realiza un movimiento demostrativo.
- **Protoboard y cables:** conectan los componentes.

## Funcionamiento
1. El sensor MQ-2 obtiene una lectura.
2. El ESP32 compara la lectura con un umbral configurado.
3. Si alcanza el umbral, activa el LED rojo, el buzzer y el servomotor.
4. Si está por debajo del umbral, activa el LED verde y devuelve el servomotor a su posición normal.
5. El proceso se repite continuamente.

## Contexto
El proyecto se plantea como una propuesta tecnológica académica orientada a la prevención de riesgos relacionados con el gas en hogares de Engativá, Bogotá.

## Limitaciones y seguridad
Este prototipo no es un detector certificado. El servomotor realiza un movimiento demostrativo y no garantiza el cierre seguro de una válvula real de gas. No debe utilizarse como sistema de seguridad doméstica.

## Equipo de trabajo
- Gabriela Abreo Riveros
- Nicol Vanesa Cardozo Bernal
- Chrismar Amar Diaz Cortez
- Valeria Franco Ayala
- Yulianis Teresa Vargas Ortiz

## Código
El programa de ejemplo se encuentra en `firmware/AURA_Gas.ino`.
