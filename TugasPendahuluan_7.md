# Tugas Pendahuluan 7

Nama: Xavier Daniswara

NPM: 2206030230

> **Note:** Pastikan sudah mempelajari tentang struktur data Stack dan Queue, serta operasinya terlebih dahulu sebelum mengerjakan nomor 1 dan nomor 2. Pastikan juga sudah mempelajari bagaimana cari insert Node pada Binary Search Tree dan apa saja jenis traversal-nya sebelum mengerjakan nomor 3 dan nomor 4.

## 1. Buatlah program dalam bahasa C yang dapat mengimplementasikan operasi `push` dan `pop` dalam sebuah Stack! (20 poin)

### Format Input

- Baris pertama berisikan bilangan bulat `N`
- `N` barisan berikutnya operasi `PUSH X` atau `POP`, dimana `X` adalah bilangan bulat yang ingin di-Push ke dalam Stack

### Format Ouput

- Seluruh elemen pada Stack

### Test Input 1

```
4
PUSH 6
PUSH 13
POP
PUSH 8
```

### Test Output 1

```
8
6
```

### Test Input 2

```
5
PUSH 1
PUSH 2
PUSH 3
PUSH 4
PUSH 5
```

### Test Output 2 

```
5
4
3
2
1
```

### Test Input 3

```
7
PUSH 1
PUSH 2
PUSH 3
PUSH 4
PUSH 5
POP
POP
```

### Test Output 3

```
3
2
1
```

## 2. Buatlah program dalam bahasa C yang dapat mengimplementasikan operasi `enqueue` dan `dequeue` dalam sebuah Queue! (20 poin)

### Format Input

- Baris pertama berisikan bilangan bulat `N`
- `N` barisan berikutnya operasi `ENQUEUE X` atau `DEQUEUE`, dimana `X` adalah bilangan bulat yang ingin di-enqueue ke dalam Queue

### Format Ouput

- Seluruh elemen pada 

### Test Input 1

```
4
ENQUEUE 6
ENQUEUE 13
DEQUEUE
ENQUEUE 8
```

### Test Output 1

```
13 8
```

### Test Input 2

```
5
ENQUEUE 1
ENQUEUE 2
ENQUEUE 3
ENQUEUE 4
ENQUEUE 5
```

### Test Output 2

```
1 2 3 4 5
```

### Test Input 3

```
7
ENQUEUE 1
ENQUEUE 2
ENQUEUE 3
ENQUEUE 4
ENQUEUE 5
DEQUEUE
DEQUEUE
```

### Test Output 3

```
3 4 5
```

## 3. Buatlah program dalam bahasa C yang dapat melakukan traversal DFS secara `inorder` pada sebuah Binary Search Tree! (30 poin)

### Format Input

- Baris pertama berisikan bilangan bulat `N`
- `N` bilangan bulat berikutnya adalah elemen yang akan di-insert pada BST

### Format Ouput

- Hasil traversal `inorder` pada BST

### Test Case Input

```
7
5 8 3 2 9 7 4
```

### Test Case Output

```
2 3 4 5 7 8 9
```

### Gambar Binary Search Tree

![](./img/Tree.png)

## 4. Buatlah program dalam bahasa C yang dapat melakukan traversal BFS pada sebuah Binary Search Tree! (30 poin)

### Format Input

- Baris pertama berisikan bilangan bulat `N`
- `N` bilangan bulat berikutnya adalah elemen yang akan di-insert pada BST

### Format Ouput

- Hasil traversal BFS pada BST

### Test Case Input

```
7
5 8 3 2 9 7 4
```

### Test Case Output

```
5 3 8 2 4 7 9
```

### Gambar Binary Search Tree

![](./img/Tree.png)
