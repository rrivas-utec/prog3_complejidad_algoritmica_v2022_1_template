# Task #4: Complejidad Algoritmico  
**course:** Programación III  
**unit:** 3  
**cmake project:** prog3_complejidad_algoritmica_v2022_1
## Instructions
Subir a gradescope los siguientes archivos:
- `sp4.h` y `sp4.cpp`

## Question #2 to #13 - Complejidad Algorítmica (15 points)

Determinar la complejidad algorítmica de cada función.

## Question #14 - Anagrama (2.5 points)

Elaborar una función `get_anagrams` que cuente con 2 parámetros, el primero para recibir una palabra y el segundo el nombre de un archivo, el programa debe devolver un vector con todas las palabras dentro del archivo que sean anagrama del primer parámetro, cada palabra estará escrita en una línea del archivo.

```cpp
    vector<string> get_anagrams(string word, string filename);
```
Determinar el `big O` del algoritmo que haya desarrollado.

**Use Case:**
```cpp
    auto result = get_anagrams("", "in.txt");
    for (const auto& text: result)
        cout << text << " ";
    cout << endl;
```
## Question #15 - Pares lejanos (2.5 points)

Elaborar la función `get_par_lejano` que lea un `std::vector` con valores aleatorios de doubles y que retorne un `std::pair` con los 2 valores que tengan la mayor diferencia entre 2 valores del vector (en valor absoluto). El programa debía ser lineal en el peor de los casos.

```cpp
std::pair <double, double> get_par_lejano(const std::vector<double>& data);
```

**Use Case:**
```cpp
    std::vector<double> vec = {10, -1, 2, 3, 4, -5, 6, 7, 8};
    auto [first, last] = get_par_lejano(vec);
    cout << first << " " << last << endl;
```