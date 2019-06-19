<h1><b>FUNDACION INSTITUTO TECNOLOGICO RAFAELA</b></h1>
<h2><b>Taller Arduino Adultos 2019</b></h2>

<h3>100 - Glosario de Términos y Apuntes</h3>

<p>&nbsp;</p>

<b>Apuntes</b>

* <b>Conceptos de electrónica básica, circuitos integrados y Arduino</b>: en español y explicados de forma muy sencilla, <a href="http://arduino.perut.org/"><b>http://arduino.perut.org/</b></a>

<p>&nbsp;</p>

<b>Glosario de términos generales</b>

* <b>ADC (Analog Digital Converter)</b>: Conversor Analógico Digital. Es un circuito que convierte una lectura de voltaje analógica en un número digital. Si bien puede comprarse por separado, en general la mayoría de las placas de desarrollo incorporan ya un ADC conectado a sus entradas analógicas. En el caso del Arduino UNO, el ADC tiene una resolución de 10 bits, es decir, puede detectar 1024 estados distintos (0 a 1023), utilizando una referencia de voltaje predeterminada de 5V. Por ende si en el pin analógico estamos leyendo un valor de 4V, la salida del ADC será de 818. Otras placas de desarrollo cuentan con ADCs de mayores resoluciones.

* <b>Analógico</b>: se refiere a un valor que puede variar continuamente a lo largo del tiempo en un determinado rango.

* <b>AREF</b> (Analog REFerence): este pin permite indicar externamente un valor de referencia de voltaje para el conversor analógico digital (ADC), permitiendo aprovechar de mejor manera la resolución del conversor según el rango de voltaje del elemento que se esté leyendo. Normalmente este valor no puede superar el de alimentación del ADC.

* <b>Argumento</b>: es el nombre con el cual se hace referencia a los parámetros de entrada de una función. Si por ejemplo analizamos digitalRead(pin), "pin" es el argumento con el que le indicamos qué pin deseamos leer.

* <b>Baudios</b>: bits por segundo. Medida de velocidad de comunicación en dispositivos seriales, normalmente en Arduino se la utiliza para configurar la consola serie.

* <b>Binario</b>: que solo puede asumir dos posibles estados, 1 o 0 (HIGH / LOW, true / false).

* <b>boolean / bool</b>: tipo de dato para manejar una variable binaria.

* <b>bootloader</b>: código cargado en un área especial del microcontrolador, que es ejecutado cada vez que el micro es energizado y se encarga de cargar nuestro código personal (sketch) en memoria Flash para que pueda ser también procesado.

* <b>DAC</b> (Digital Analog Converter): en sentido inverso al ADC, el DAC convierte un valor digital en un voltaje analógico de salida. Se utiliza mucho en proyectos de audio, aunque no es común en las placas de desarrollo, muchos Arduino no cuentan con DAC, solo ADC.

* <b>Digital</b>: se refiere a un sistema que opera con valores discretos.

* <b>Divisor de voltaje</b> (Voltaje divider): un circuito muy simple que provee una salida, la cual es una fracción del valor de entrada. Comunmente se compone de un par de resistencias colocadas en serie, encontrándose la salida entre ambas. El valor de esta salida lógicamente dependerá de la alimentación aportada a la primer resistencia y el valor de las propias resistencias, pudiendo calcularse fácilmente o chequearse a través de calculadoras online.

* <b>Duty Cycle</b> (ciclo de trabajo): este término indica cuánto tiempo se mantiene activa una señal dentro de un determinado período. Es muy común en PWM. Para el caso del Arduino uno, donde la salida PWM opera entre 0 y 255, un valor de 25 nos indica un duty cycle del 10%, es decir, en cada ciclo la señal se mantiene 10% del tiempo en alto y 90% en bajo.

* <b>EEPROM</b> (Electrically Erasable Programmable Read Only Memory): memoria solo lectura programable y borrable electricamente. Es una memoria de pequeña capacidad que puede borrarse y escribirse un numero limitado de veces (pero suficientemente grande, entre 100 mil y 1 millón de veces), y que NO pierde la información escrita aún cuando desconectamos la energía de la misma.

* <b>Firmware</b>: es un término para identificar a un programa (software) pero almacenado en una memoria de tipo no volátil y que puede ser ejecutado sin necesidad de ser copiado a RAM, muy común en el ámbito de microcontroladores y otros.

* <b>Flash</b>: tipo de memoria NO VOLATIL, evolución de las EEPROM. Puede ser borrada eléctricamente y se emplea de forma masiva en tarjetas SD y microSD, teléfonos móviles, y por supuesto como memoria de programa en microcontroladores.

* <b>GND</b>: es la etiqueta que se utiliza para identificar el pin en el cual suministramos tierra (ground) al circuito. El otro pin para voltaje, normalmente se indica con VCC.

* <b>I2C (Inter Integrated Circuit)</b>: protocolo introducido por Philips a principios de los 80, que se ha vuelto standard en el Ambito de Arduino y el prototipado en general. Permite comunicación serial síncrona entre 2 o más dispositivos, utilizando solo 2 cables de datos (SDA y SCL) bajo una estructura master / esclavo. De configuración muy práctica, se emplea para una gran variedad de sensores y dispositivos conectables a Arduino.

* <b>IDE</b> (Integrated Development Environment): entorno integrado de desarrollo. Generalmente hace referencia a una aplicación que sirve como editor para programar, y respecto al proyecto Arduino, hace referencia al Arduino IDE.

* <b>LED</b> (Light Emitting Diode): diodo emisor de luz, el típico led que observamos en casi todas las aplicaciones electrónicas, de muy bajo consumo y obtenible en diferentes colores, en otros casos también 2 o 3 colores combinables, o incluso leds programables tipo Neopixel. Si se trata de un led standard, debe SIEMPRE ir acompañado de una resistencia para ajustar el voltaje que recibe.

* <b>LDR</b> (Light Dependent Resistor): resistencia dependiente de la luz, se trata de una resistencia que vería en función de la intensidad de luz a la cual es expuesta. Podemos conectar un LDR a una entrada analógica de Arduino y leer el voltaje para detectar una variación en la luz recibida por el sensor. Es el principio utilizado desde hace muchos años en las celdas para encendido automático de iluminación ciudadana por ejemplo, entre noche y día.

* <b>Librería</b>: con este término identificamos a un código externo, el cual incorporamos en nuestro programa para agregar determinada funcionalidad. En el ámbito opensource de Arduino las librerías son ampliamente utilizadas, ya que existe una enorme cantidad de código de terceros que se pone a disposición de la comunidad para ser aprovechado.

* <b>LiOn / LiPo (Litio-Ion / Litio-Polímero)</b>: hace referencia a baterías base litio, en ambos casos recargables. Las LiOn son de costo muy accesible, como las populares 18650, mientras que las LiPo son comparativamente más caras pero cuentan con mejores relaciones capacidad / peso, pudiendo ser drenadas a altas tasas de descarga. En este tipo de baterías no existe el efecto memoria.

* <b>loop()</b>: es una función predefinida en la estructura de código del Arduino IDE. Se activa luego de setup() y su contenido se ejecuta de manera continua y repetida mientras el microcontrolador permanezca energizado.

* <b>milisegundo (ms)</b>: la milésima parte del segundo, es decir, 1 segundo contiene 1000 ms.

* <b>microsegundo (us)</b>: la milésima parte del microsegundo, es decir, 1 segundo contiene 1000000 us.

* <b>Objecto</b>: instancia de una clase. Por ejemplo cuando utilizamos una librería como la Servo, y creamos un nuevo elemento utilizando la instrucción Servo mi_servo;, mi_servo es un objeto de tipo Servo según la definición de esa librería. A través de los métodos de este objeto (también definidos en la librería), podremos controlar el elemento físico, en este caso el servo.

* <b>Optoacoplador</b>: es un circuito integrado que combina de un lado un led y del otro un foto-transistor, encapsulados en un paquete sellado. El led se ubica de tal manera que al activarse ilumina el foto-transistor para controlar si éste conduce. Permite una alta aislación ya que no existe conexión eléctrica entre la entrada y la salida, solo óptica.

* <b>Paralelo</b>: cuando conectamos 2 o más componentes a través del mismo punto en un circuito, con lo cual la corriente fluirá de forma simultánea hacia todos ellos. En el caso de baterías, si conectamos en paralelo, estaremos sumando mAh (miliamperes hora = autonomía), y manteniendo su voltaje original.

* <b>Potenciómetro (Pot)</b>: es una resistencia variable, cuyo valor podemos ajustar fácilmente mediante una perilla. Resulta de utilidad en el control de entradas analógicas.

* <b>RTC</b> (Real Time Clock): reloj de tiempo real. Se trata de una placa complementaria, que permite llevar un control exacto de fecha y hora, alimentada por una batería de larga duración, de forma similar a lo que se utiliza en muchas motherboards de PC y otros sistemas. De esta forma los datos de tiempo no se pierden entre reinicios o cortes de energía.

* <b>Serie</b>: cuando conectamos 2 o más componentes uno tras otro en un circuito, con lo cual la corriente fluirá de uno hacia el siguiente en orden. En el caso de baterías, si conectamos en serie, estaremos sumando voltaje y manteniendo la autonomía original (mAh).

* <b>Shield</b>: en el entorno Arduino, hace referencia a una placa "apilable" sobre un arduino standard como un UNO o Mega por ejemplo, que posibilita agregar funcionalidades no soportadas por la placa original.

* <b>Sketch</b>: es el nombre que se le da a un programa Arduino generado a través del IDE, usualmente lleva la extensión .ino. Un Sketch puede estar compuesto de 1 o más archivos, y el lenguaje en el que está escrito es C/C++.

* <b>SRAM</b> (Static Random Access Memory): memoria estática de acceso aleatorio. Hace referencia a la memoria volátil (es decir no permanente) dentro de los Arduinos y que se utiliza normalmente para la gestión de variables y demás detalles en tiempo de ejecución. Al ser Static, el contenido se mantendrá almacenado mientras se mantenga el voltaje conectado, tan pronto como la alimentación desaparezca, la memoria se limpiará.

* <b>SPI (Serial Peripheral Interface)</b>: otro protocolo serial de comunicación síncrona y estructura master / esclavo, ampliamente utilizado en Arduino y otros entornos de prototipado. Permite una comunicación full-duplex ya que utiliza 4 cables de datos, siendo por ende más rápido que I2C aunque obviamente requiriendo más pines para control.

* <b>SOC (System On Chip)</b>: es una evolución en los sistemas embebidos, donde en un solo paquete y sustrato, se alojan todos los componentes necesarios para una computadora funcional (microprocesador, varios tipos de memoria, interfaces de comunicación, etc). Distintas placas de desarrollo embebidas, celulares, etc, operan con esta tecnología.

* <b>TTL (Transistor Transistor Logic)</b>: hace referencia a un tipo de lógica de circuito que opera con niveles de 5V/0V. Es una tecnología que está en uso desde hace mucho tiempo (años sesenta)y sigue teniendo gran aplicación en la actualidad, de hecho muchos Arduino como el típico UNO operan con TTL. Por supuesto con el tiempo han ido surgiendo otras tecnologías de mejor voltaje / consumo que paulatinamente han ido reemplazando aplicaciones TTL, micros como los ESP8266 o los ESP32 operan con 3V3/0V.

* <b>VCC</b>: es la etiqueta que se utiliza para identificar el pin en el cual suministramos voltaje positivo al circuito. El otro pin para tierra (ground), normalmente se indica con VSS o GND.

* <b>VIN (voltaje de entrada)</b>: es la etiqueta que se utiliza para identificar el pin de voltaje de entrada, utilizable con una fuente externa. El valor de este voltaje puede variar según la placa de desarrollo, y si dicha placa tiene otras entradas de voltaje (como un jack standard), este pin puede usarse como toma de ese voltaje.

<p>&nbsp;</p>

<b>Glosario de comandos y funciones</b>

* <b>analogRead(pin)</b>: para leer un pin analógico. Devolverá una lectura entera dentro de un rango, proporcional a su referencia de voltaje. En el caso del Arduino UNO por ejemplo, la referencia original de voltaje es de 5V, y el rango de 10 bits (0 a 1023), con lo cual si en una entrada analógica tenemos 2.5V, la función devolverá 512. Según la placa de desarrollo que se utilice, estos rangos de trabajo pueden variar.

* <b>analogWrite(pin, valor)</b>: para escribir un valor pseudo-analógico en un pin digital, utilizando Modulación de Ancho de Pulso - PWM (Pulse Width Modulation). Es muy útil para el control de distintos elementos, normalmente "valor" opera en el rango de 0 a 255, con lo cual si enviamos por ejemplo 128, estamos habilitando una señal PWM con Duty Cycle del 50%, es decir, mitad del tiempo en alto, mitad del tiempo en bajo.

* <b>attachInterrupt(pin, funcion, evento)</b>: permite habilitar una interrupción por hardware, de esta manera, cuando se produzca el evento en el pin indicado, el sistema ejecutará la función definida. Es útil para atender cambios de estado que no son periódicos sino eventuales, como por ejemplo el pulsado de un botón de emergencia. ATENCION!: no cualquier pin puede ser utilizado para interrupciones HW, esto dependerá de la placa de desarrollo elegida, en el caso del Arduino UNO solo los pines digitales 2 y 3 son aplicables.

* <b>const</b>: permite definir una constante dentro del código Arduino. Recordemos que una constante no es más que un nombre con el cual se identifica un valor en el programa, y este valor por supuesto NO se modificará durante toda la ejecución. Por convención, lo habitual en Arduino es declarar las constantes en mayúsculas, por ejemplo const byte PIN_LED = 3;.

* <b>delay(tiempo)</b>: función que nos permite introducir una espera en la ejecución del código, especificada en milisegundos. Si ejecutamos una acción y deseamos esperar 3 segundos para la siguiente, colocamos delay(3000);. ATENCIÓN!: si bien el uso de delay() es perfectamente válido, debemos recordar que mientras está en ejecución la demora especificada, el microcontrolador NO ATIENDE OTRAS INSTRUCCIONES. Esto significa que si nuestro código opera por ejemplo con la pulsación de un botón o la lectura de un sensor, el micro HARA CASO OMISO de estos eventos hasta completar la espera del delay.

* <b>digitalPinToInterrupt(pin)</b>: una simple función wrapper que traduce el número de pin indicado en "pin" al número de interrupción correspondiente. En el caso de Arduino UNO, solo los pines 2 y 3 están disponibles para interrupciones HW, siendo el 2 la interrupción 0 y el 3 la 1.

* <b>digitalRead(pin)</b>: para leer un pin digital, retornando el booleano correspondiente (true o false), según el pin esté recibiendo voltaje o no. Recordar que en el caso de las placas de desarrollo, el voltaje normal de operación es de 5V o 3.3V, cualquier valor mayor debe ser conectado a través de una interfaz apropiada, si se aplica de forma directa, dañará el pin.

* <b>digitalWrite(pin, valor)</b>: para escribir un valor a un pin digital. "valor" será solamente true o false (HIGH/LOW, 1/0). Si colocamos un true el pin comenzará a tener lectura de voltaje, con false quedará en 0.

* <b>else</b> (sino): se utiliza junto a if(), y permite indicar un bloque alternativo de código. Así, si la condición del if() se verifica, se ejecutará un determinado paquete de código, y sino (else), otro.

* <b>FALLING</b> (cayendo): constante predefinida que se utiliza normalmente en attachInterrupt y que nos permite estar atentos al flanco de caída del pin, es decir, el momento en el cual comienza a caer de HIGH a LOW (1 a 0).

* <b>for()</b>: nos permite definir un ciclo para ejecutar un paquete de código una determinada cantidad de veces, por ejemplo for (byte i=0; i <= 255; i++); ejecutará su contenido 256 veces (de 0 a 255). i++ es una abreviatura de i = i + 1, lógicamente podríamos cambiar este valor no solo para incrementar sino también para decrementar, de a 1 o más.

* <b>Función</b>: bloque de código identificado bajo un nombre, el cual permite "llamarlo" repetidas veces desde distintos lugares del código principal. De esta forma se ahorra escritura de código repetitivo. En Arduino una función se define utilizando el comando <i>function</i>, recordando que puede aceptar o no argumentos (parámetros pasados a la función), como retornar o no valor.

* <b>HIGH</b>: constante predefinida del entorno Arduino, que se utiliza para asignar o verificar el estado alto de un pin, equivalente a true o 1.

* <b>if(condicion)</b> (si): comando que nos permite verificar si la condición o condiciones indicadas en "condicion" se cumplen. De esta forma, el código encerrado dentro de las llaves del if(), solo se ejecutará si la condición se verifica, permitiéndonos evaluar diferentes situaciones y ejecutar distintas partes de código según corresponda.

* <b>#include</b>: palabra reservada qu nos permite incluir una librería, es decir, reutilizar código externo en nuestro propio programa. Así si por ejemplo deseamos controlar un servo, podemos incluir la librería standard mediante #include <Servo.h>, y quedar listos para comenzar a utilizar las clases y métodos definidos en ella.

* <b>INPUT</b>: constante predefinida, que se utiliza en una instrucción pinMode() para indicar que el deseamos utilizar el pin como ENTRADA.

* <b>INPUT_PULLDOWN</b>: misma situación de INPUT, pero habilitando la resistencia de PULLDOWN interna disponible en el pin. ATENCION!: esta constante no está habilitada en muchos Arduinos, ya que los modelos más tradicionales solo disponen de resistencias de PULLUP internas.

* <b>INPUT_PULLUP</b>: misma situación de INPUT, pero habilitando la resistencia de PULLUP interna disponible en el pin.

* <b>LOW</b>: constante predefinida, que se utiliza para asignar o verificar el estado bajo de un pin, equivalente a false o 0.

* <b>map()</b>: nos posibilita "mapear" (extrapolar) un rango de valores en otro, útil por ejemplo en la lectura de valores analógicos para convetirlos a valores útiles en el código. Así por ejemplo, si utilizamos map(lectura, 0, 1023, 0, 100), y leemos desde el conversor del pin analógico un valor de 256, map() nos devolverá 25, 1023 -> 100, 512 -> 50, etc.

* <b>millis()</b>: devuelve la cantidad de milisegundos transcurridos desde que inició la ejecución del código actual. Este dato es muy útil para poder efectuar un control preciso de tiempos, por ejemplo al ejecutar varias tareas programadas a diferentes intervalos regulares.

* <b>Matriz</b>: array = arreglo, es un "paquete" de variables que almacenan el mismo tipo de dato, y pueden ser manejadas como unidad, diferenciando cada una mediante un índice. Para declarar una matriz de números enteros, escribimos: int numeros[] = {6, 58, 3};. Si deseamos leer o modificar el segundo item de la matriz, hacemos referencia a él como numeros[1], ya que siempre el conteo de índices de un array comienza en 0.

* <b>noTone(pin)</b>: detiene la generación de frecuencia de tono en el pin especificado. Cuando empleamos un buzzer activo y deseamos detener un tono de duración indefinida, aplicamos esta función.

* <b>OUTPUT</b>: constante predefinida, que se utiliza en una instrucción pinMode() para indicar que el deseamos utilizar el pin como SALIDA.

* <b>PinMode(pin, modo): función de alto nivel para definir si un pin se comportará como entrada o salida. "modo" puede ser INPUT, OUTPUT, INPUT_PULLUP y solo en algunas placas específicas (por ejemplo las ESP32), INPUT_PULLDOWN, ya que la mayoría no cuentan con resistencias PULLDOWN internas, solo PULLUP.

* <b>RISING</b> (trepando): constante predefinida que se utiliza normalmente en attachInterrupt y que nos permite estar atentos al flanco de subida del pin, es decir, el momento en el cual comienza a subir de LOW a HIGH (0 a 1).

* <b>Serial.begin(baudios)</b>: nos permite inicializar la consola serial con la velocidad especificada en "baudios", muy útil para loguear el estado de variables y mensajes para depurar el funcionamiento de nuestro código.

* <b>Serial.print(mensaje) y Serial.println(mensaje)</b>: dos métodos característicos del objeto Serial para imprimir valores al puerto serie, print lo hace en la misma línea y println realiza un salto de línea luego de imprimir el contenido.

* <b>setup()</b>: función predefinida en la estructura de código del Arduino IDE. Su contenido se ejecuta UNA SOLA VEZ al comienzo, es decir que no volverá a correr hasta tanto reiniciemos o reenergicemos el micro, por ende es aplicable para colocar allí ajustes de inicio como Serial.begin(), pinMode(), etc.

* <b>tone(pin, tono, duracion)</b>: permite emitir un tono utilizando un buzzer (chicharra, zumbador) de tipo activo. "tono" especifica la frecuencia del tono en herzios y duracion la duración en milisegundos. Si se omite duración, el buzzer quedará emitiendo el tono indefinidamente hasta que se llame a la función noTone().

* <b>unsigned</b>: modificador que empleamos en nuestro código para indicar que una variable solo debe almacenar valores positivos, muy útil para organizarnos cuando por ejemplo estamos realizando un control de tiempo con dicha variable.

* <b>Variable</b>: un nombre que identifica un valor, pero que a diferencia de las constantes, sí podrá modificarse durante la ejecución del código. Si por ejemplo queremos guardar un contador entero, podemos declararlo e inicializarlo por ejemplo con int contador = 0;. Revisar SIEMPRE el tipo de dato que se necesita aplicar, según el tipo de valor que guardará la variable (texto, booleano, entero, coma flotante).

* <b>Variable global</b>: una variable definida al inicio de nuestro código, antes de setup(). Esta variable puede ser accedida desde cualquier parte de nuestro programa, es decir, su ámbito de aplicación (scope) es el programa completo.

* <b>Variable local</b>: una variable que solo existe dentro del ámbito (scope) en el cual es declarada. Por ejemplo, si la declaramos dentro de setup(), solo existirá allí; si lo hacemos dentro de una función personal que hemos definido, supongamos llamada controlPeso(), solo podrá usarse dentro de dicha función.

* <b>void</b>: palabra reservada propia de C, que indica que el elemento NO retorna valor, utilizada por ejemplo en la definición de funciones.

* <b>while(condicion)</b> (mientras): como sucede con el for(), nos permite ejecutar un bloque de código de manera repetitiva. Si bien ambos pueden aplicarse a veces de forma indistinta al mismo cometido, por lo general el for() se reserva para ejecutar X cantidad de veces, y el while() para ejecutar HASTA que se cumpla determinada condición. Si escribimos while (conectado == true) {}, el código entre llaves se ejecutará mientras conectado sea igual a false, tan pronto como cambie a true, el while se "romperá" y el sistema continuará con la instrucción debajo.