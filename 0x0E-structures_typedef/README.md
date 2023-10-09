# 0x0E. C - Structures, typedef

## Resources

### Read or watch:

* [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T080151Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=baa9a1558d0df13eb1c3e7b7d50ec9d6f2075e55f3ad147ab1191c8f02e158ff)
* [struct (C programming language)](https://www.geeksforgeeks.org/structures-c/#:~:text=The%20structure%20in%20C%20is,of%20any%20valid%20data%20type.)
* [Documentation: structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
* [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T134759Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=a9b1bd8901b40bc00fd5b751e28c46b0ec19fba56c60cdd4cdd54143859a4e14)
* [typedef]( https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
* [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)

## Learning Objectives

* What are structures, when, why and how to use them
* How to use typedef

## Tasks 

![who let the dogs out, remote](https://media.giphy.com/media/10oxaWNVmz4G9q/giphy.gif)

0. Poppy

Define a new type struct dog with the following elements:

* name, type = char *
* age, type = float
* owner, type = char *

1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog

* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog

* Prototype: void print_dog(struct dog *d);

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type dog_t as a new name for the type struct dog.

4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

* Prototype: dog_t *new_dog(char *name, float age, char *owner);

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

* Prototype: void free_dog(dog_t *d);
