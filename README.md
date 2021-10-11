# ExampleProject

**ExampleProject** made for lab3 on dev & analysis of tech. documentation

This page was generated, using __Doxygen__.

### Picture usage example #

|   |   |   |
|:-:|:-:|:-:|
|<img src="./assets/pic.png" alt="Picture" width="400"/>|<img src="./assets/pic.png" alt="Picture" width="300"/>|<img src="./assets/pic.png" alt="Picture" width="200"/>|
|<img src="./assets/pic.png" alt="Picture" width="300"/>|<img src="./assets/pic.png" alt="Picture" width="200"/>|<img src="./assets/pic.png" alt="Picture" width="100"/>|
|<img src="./assets/pic.png" alt="Picture" width="200"/>|<img src="./assets/pic.png" alt="Picture" width="100"/>|<img src="./assets/pic.png" alt="Picture" width="50"/>|

#### Lists usage example: #
- _Italic text_.
- __Bold text__.
- ___Bold italic text___.

### Code blocks #

Example of using code inserts

~~~{.cpp}

long long binpow(int base, int exp){
    if(exp <= 1){
        return (exp == 0 ? 1 : base);
    }
    return (exp % 2 == 0 ?
        (sqr(binpow(base, exp / 2))) :
        (base * binpow(base, exp - 1)));
}

~~~

### Table usage example #
Algorithm | Binary power | Iterative power |
:-: | :-: | :-: |
Algorithm complexity | O(log(exp)) | O(exp) |
Fastest algorithm | _Binary power_ ||

### Link example #

[<img src="https://codeforces.org/s/75755/images/codeforces-logo-with-telegram.png" alt="CF" width="250"/>](https://codeforces.com)

[<img src="https://www.google.ru/images/branding/googlelogo/2x/googlelogo_color_160x56dp.png" alt="Google" width="250"/>](https://google.com)
