# Safe String Copy (C)

- Funzione in C per copiare stringhe in modo sicuro + esempio nella main.
- Evita buffer overflow, gestisce puntatori NULL e garantisce sempre il terminatore null (\0).

## Funzione principale
```c
char *safeCpSTR(const char *str, size_t count);
```

- Ritorna un puntatore alla nuova stringa allocata dinamicamente, oppure NULL in caso di errore
