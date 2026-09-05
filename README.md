#act4
 Funcionamiento de Punteros en la RAM
***Paso por referencia (`&` y `*`):** Las funciones reciben la dirección de memoria de las variables (usando `&` en el `main`) a través de un puntero (`EntidadProyecto* ptr`), permitiendo modificar y leer los datos directamente en sus casilleros físicos de la RAM sin duplicar información.
* **Acceso a miembros (`->`):** Se utiliza el operador flecha para acceder de forma directa a los atributos internos de la estructura alojados en la memoria.
* **Gestión de cadenas (`cin.getline`):** Se implementa `cin.ignore()` para limpiar el búfer de entrada y `cin.getline()` para capturar cadenas de texto con espacios de forma segura.

 Compilación y Ejecución
```bash
g++ "src/memoria y struct.cpp" -o src/main.exe
./src/main.exe
