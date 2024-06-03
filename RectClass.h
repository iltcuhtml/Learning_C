#ifndef _RectClass_h_
#define _RectClass_h_
    typedef struct Rect {
        unsigned int width, height;

        void (*draw)();
        void (*delete)();
    } Rect;

    Rect newRect(unsigned int width, unsigned int height);
    void drawRect(Rect rect);
    void deleteRect(Rect rect);

    Rect newRect(unsigned int width, unsigned int height) {
        Rect *rect = malloc(sizeof(Rect));

        if (rect == NULL) {
            printf("malloc() failed\n");

            exit(1);
        }

        rect->width = width;
        rect->height = height;

        rect->draw = drawRect;
        rect->delete = deleteRect;

        return *rect;
    }

    void drawRect(Rect rect) {
        // if (rect == NULL)
        // {
        //     printf("Rect is NULL\n");

        //     return;
        // }

        for (int y = 0; y < rect.height; y++) {
            for (int x = 0; x < rect.width; x++) {
                printf("#");
            }

            printf("\n");
        }

        printf("\n");

        return;
    }

    void deleteRect(Rect rect) {
        // if (rect == NULL)
        // {
        //     printf("Rect is NULL\n");

        //     return;
        // }

        free(&rect);
    
    }
#endif
