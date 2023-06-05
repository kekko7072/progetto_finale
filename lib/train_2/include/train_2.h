#ifndef train_2_h
#define train_2_h

/*
 *  Struttura dati per la lista di immagini
 */
struct immagine *train_ordinato(struct immagine *head);

/*
 *  Funzioni per ordinare la lista di immagini
 */
void ordina_lista(struct immagine *immagine);

/*
 *  Funzioni per rimuovere l'ultima immagine
 */
void rimuovi(struct immagine *ultimaimmagine);

#endif