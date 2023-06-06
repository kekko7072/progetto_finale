#ifndef train_2_h
#define train_2_h

/*
 *  Struttura dati per la lista di immagini
 */
struct immagine *train_ordinato(struct immagine *head);

/*
 *  Funzioni per ordinare la lista di immagini
 */
struct immagine *inserimento_ordinato (struct immagine *lista, int label, double matrix [784]);

/*
 *  Funzioni per rimuovere l'ultima immagine
 */
void rimuovi2(struct immagine *ultimaimmagine);

#endif