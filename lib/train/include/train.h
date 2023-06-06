#ifndef train_h
#define train_h

/*
 *  Struttura dati per la lista di immagini
 */
struct immagine *train(struct immagine *head);

/*
 *  Funzioni per rimuovere l'ultima immagine
 */
void rimuovi(struct immagine *ultimaimmagine);

#endif