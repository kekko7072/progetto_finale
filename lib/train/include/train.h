// image_helper.h
#ifndef train_h
#define train_h

struct immagine *aggiungi(struct immagine *image, int index, int label);
struct immagine train(void);
struct immagine *rimuovi (struct immagine *ultimaimmagine);


//TODO implement classify

#endif
