# Bitácora de Proyecto: Sistema de Automatización de Iluminación con Arduino UNO

## 1. Definición de la Problemática
En muchos hogares, oficinas y espacios comunes, es común el hábito de dejar las luces encendidas al retirarse de una habitación, lo que genera un **consumo energético innecesario** y un incremento evitable en la factura de electricidad. Asimismo, en situaciones de oscuridad, buscar el interruptor manual puede resultar incómodo o inseguro (especialmente para niños o adultos mayores). 

**Solución propuesta:** Implementar un sistema automatizado basado en hardware libre utilizando **Arduino UNO** y un sensor de presencia, capaz de detectar el movimiento humano en un espacio determinado para encender las luces de forma automática y apagarlas transcurrido un tiempo sin registrar actividad.

---

## 2. Requerimientos e Historia de Usuario

### A. Requerimientos Funcionales (RF)
* **RF01:** El sistema debe detectar la presencia de personas mediante un sensor de movimiento en un radio de acción de hasta 5 metros.
* **RF02:** El sistema debe encender el sistema lumínico de forma inmediata al detectarse movimiento.
* **RF03:** El sistema debe mantener las luces encendidas mientras persista el movimiento en el área vigilada.
* **RF04:** El sistema debe apagar las luces automáticamente tras un intervalo predefinido de inactividad (ej. 10 segundos en fase de prueba).

### B. Requerimientos No Funcionales (RNF)
* **RNF01 (Disponibilidad):** El circuito debe operar de manera continua (24/7) mientras esté conectado a una fuente de alimentación estable de 5V (USB) o fuente externa de 9V.
* **RNF02 (Tiempo de respuesta):** La latencia entre la detección física del sensor y la activación del relé/luz no debe superar los 500 milisegundos.
* **RNF03 (Costo/Mantenimiento):** El diseño debe emplear componentes económicos y accesibles en el mercado local para facilitar su recambio o réplica.

### C. Historia de Usuario (HU)
* **Título:** Automatización de encendido de luces por presencia.
* **Como** usuario frecuente del espacio,
* **Quiero** que las luces se enciendan automáticamente cuando ingrese a la habitación y se apaguen al salir,
* **Para** evitar el consumo eléctrico innecesario y no tener que accionar interruptores manualmente.
* **Criterios de aceptación:**
  1. Al cruzar frente al sensor, la señal activa el circuito de iluminación en menos de 1 segundo.
  2. Si no hay movimiento detectado durante el tiempo estipulado, la luz se apaga por completo.

---

## 3. Elección del Proyecto
Para dar solución a la problemática planteada, se seleccionó la placa de desarrollo **Arduino UNO** debido a su gran versatilidad, facilidad de programación y amplia compatibilidad con módulos sensores y actuadores. 

Como componente de detección se eligió el **Sensor Infrarrojo Pasivo (PIR) HC-SR501**, idóneo para identificar la radiación infrarroja emitida por el cuerpo humano. Como elemento de control de potencia para las luces se integrará un **Módulo Relé de 1 canal**, permitiendo aislar la lógica de control de Arduino (5V) de la carga de alimentación eléctrica.

---

## 4. Investigación de Precios de Componentes y Costos
A continuación se detalla el presupuesto estimado de los componentes necesarios para el armado del prototipo (valores de referencia en el mercado local de electrónica):

| Componente | Cantidad | Precio Unitario (ARS) | Subtotal (ARS) |
| :--- | :---: | :---: | :---: |
| **Placa Arduino UNO (Compatible) + Cable USB** | 1 | $15.300 | $15.300 |
| **Sensor de Movimiento PIR HC-SR501** | 1 | $4.200 | $4.200 |
| **Módulo Relé de 1 Canal (5V)** | 1 | $3.500 | $3.500 |
| **Protoboard y Cables de Conexión (Jumpers)** | 1 set | $5.000 | $5.000 |
| **Fuente de Alimentación / Cargador 5V** | 1 | $4.000 | $4.000 |
| **TOTAL ESTIMADO** | | | **$32.000** |

---

## 5. Próximos Pasos (Diagrama y Código)
1. Conexión física del circuito en protoboard respetando los pines digitales de Arduino.
2. Desarrollo y carga del sketch preliminar en el IDE de Arduino.
3. Pruebas de campo y calibración del potenciómetro de sensibilidad del sensor PIR.