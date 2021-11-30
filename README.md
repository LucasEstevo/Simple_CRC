<h1 align="center">💻 Simples Conversor CRC | ESP-IDF 💻</h1>
<p align="center">
<a>
    <img alt="GitHub last commit" src="https://img.shields.io/github/repo-size/LucasEstevo/Simple_CRC">
</a>
<a>
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LucasEstevo/Simple_CRC">
</a>
<a>
    <img alt="GitHub last commit" src="https://img.shields.io/github/license/LucasEstevo/Simple_CRC">
</a>
<a>
    <img alt="GitHub last commit" src="https://img.shields.io/github/stars/LucasEstevo?style=social">
</a>
<a>
    <img alt="" src="https://img.shields.io/badge/feito%20por-Lucas Estevo-%237519C1">
<a>
</p>
<br/>

<h4 align="center"> 
	🚧 Projeto Concluído 🐱‍👤 🚧
</h4>

---
<br/>

## ✨Pré-requisitos

Antes de começar, você vai precisar ter instalado em sua máquina as seguintes ferramentas:
[VSCode](https://code.visualstudio.com/), [Git](https://git-scm.com), [Python3](https://www.python.org/downloads/) e [CMake](https://cmake.org/).
Após a instalação de todos estes softwares abra o VSCode e instale a extensão **Espressif IDF**, agora o VSCode estará pronto para executar o código.

<br/>

---

## 📝 Sobre o Projeto
O código contém a conversão para CRC32 e CRC16, ambos contendo conversão pública e conversão privada na qual possui uma "senha" que altera a conversão. O funcionando da conversão privada se baseia em concatenar uma senha no inicio do char a ser convertido, para criar o CRC com uma codificação simples impedindo que falsas mensagens alterem o funcionamento do sistema.

<br/>

---

## 🐱‍💻 Sobre o Código 

<br/>

```C
#define BUFF_SIZE 1024 //Define o tamanho máximo do char a ser convertido nos CRC's
```

<br/>

``` C
/*! \brief: Faz a conversão do char em CRC32 puro
 *  \param: char crc[BUFF_SIZE] - Recebe a mensagem  para conversão 
 */  
void crc32_publico(char crc[BUFF_SIZE])
```

<br/>

``` C
/*! \brief: Faz a conversão do char em CRC32 com uma codificação simples
 *  \param: char senha[] Recebe o valor que será usado para a codificação
 *  \param: char crc[BUFF_SIZE] - Recebe a mensagem para conversão 
 */ 
void crc32_privado(char senha[], char crc[BUFF_SIZE])
```
<br/>

``` C
/*! \brief: Faz a conversão do char em CRC16 puro
 *  \param: char crc[BUFF_SIZE] - Recebe a mensagem para conversão 
 */ 
void crc16_publico(char crc[BUFF_SIZE])
```

<br/>

``` C
/*! \brief: Faz a conversão do char em CRC16 com uma codificação simples
 *  \param: char senha[] Recebe o valor que será usado para a codificação
 *  \param: char crc[BUFF_SIZE] - Recebe a mensagem para conversão 
 */ 
void crc32_privado(char senha[], char crc[BUFF_SIZE])
```

<br/>

>⚠️ Caso você utilize um **char pré-definido** para chamar algum void crc, deixe o char sem definição de tamanho para evitar conflitos no código, como mostrado no exemplo abaixo:⚠️
``` C
/* Correto */
char mensagem[] = "123abc";
char senha[] = "123a";
crc32_privado(senha,mensagem);

/* Incorreto */
char mensagem[6] = "123abc";
char senha[4] = "123a";
crc32_privado(senha,mensagem);
```

<br/>

Você pode utilizar os sites abaixo para conferir suas conversões.<br/>
[Cálculo a partir de uma "frase"](https://crccalc.com/) <br/>
[Cálculo a partir de um arquivo](https://emn178.github.io/online-tools/)

---
## 🦸🏻‍♂️ Autor

 <img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/86720109?s=400&v=4" width="100px;" alt=""/>
 Lucas Estevo 🚀
 
	
[![Linkedin Badge](https://img.shields.io/badge/-Lucas-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/lucasestevo/)](https://www.linkedin.com/in/lucasestevo/)
![Gmail Badge](https://img.shields.io/badge/-lucasestevo2015@gmail.com-c14438?style=flat-square&logo=Gmail&logoColor=white)

---

## 📝 Licença

Este projeto esta sobe a licença [MIT](./LICENSE).

Feito por Lucas Estevo 👋🏽 [Entre em contato!](https://www.linkedin.com/in/lucasestevo/)

---

##  Versões do README

[Português 🇧🇷](./README-pt_BR.md)  |  [Inglês 🇺🇸](./README-en.md) 


