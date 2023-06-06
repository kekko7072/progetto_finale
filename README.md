# Progetto Finale
INP7078557 - Progetto finale

Progetto finale per il corso di laboratorio di informatica industriale della Professoressa Emilia Reggiani.

# Partecipanti
Nome del gruppo: PaPaBeVe
Partecipanti: 
| Nome Cognome | Matricola | GitHub |
|----------|----------|----------|
|   Bellorio Luca   |   2003720   |   [lucabellorio](https://github.com/lucabellorio)   |
|   Pasqualotto Stephen   |   2001349   |   [stephenpasqualottounipd](https://github.com/stephenpasqualottounipd)   |
|   Parise Leonardo   |   2005438   |   [leonardo parise](https://github.com/leonardoparise)   |
|   Vezzani Francesco   |   2003297   |   [kekko7072](https://github.com/kekko7072)   |

# Compilazione
Comandi per l'esecuzione dei file compilati:
```
sh release.sh
```
e poi basta selezionare la versione che si desidera avere.

# Esecuzione
  ## versione 5.1
  - non ottimizzata : `./release/app_5_1`
  - ottimizzata **gcc -O1** : `./release/app_5_1_opt_1`
  - ottimizzata **gcc -O2** : `./release/app_5_1_opt_2`
  
  ## versione 5.2
   - non ottimizzata :  `./release/app_5_2`
  - ottimizzata **gcc -O1** :  `./release/app_5_2_opt_1`
  - ottimizzata **gcc -O2** : `./release/app_5_2_opt_2`

# Testing
Per l'escecuzione dei test è necessario avviare il programma bash di testing:
```
sh test.sh
```
In automatico verranno compilati ed eseguiti i test per le versioni 5.1 e 5.2.