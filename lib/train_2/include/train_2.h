#ifndef train_2_h
#define train_2_h

/*
 *  Struttura dati per la lista di immagini
 */
struct immagine *train_ordinato(struct immagine *head);

/*
 *  Funzioni per ordinare la lista di immagini
 */
struct immagine *ordina_lista (struct immagine *lista, int i);


/*
 *  Funzioni per rimuovere l'ultima immagine
 */
void rimuovi(struct immagine *ultimaimmagine);

#endif