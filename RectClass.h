#ifndef _RectClass_h_
    #define _RectClass_h_
    
    typedef struct Rect
    {
        unsigned int width, height;

        void (*draw)(struct Rect* rect);
        void (*delete)(struct Rect* rect);
    } Rect;

    Rect* newRect(unsigned int width, unsigned int height);
    void drawRect(Rect* rect);
    void deleteRect(Rect* rect);

    Rect* newRect(unsigned int width, unsigned int height)
    {
        Rect* rect = (Rect* )malloc(sizeof(Rect));

        if (rect == NULL)
        {
            printf("\n\nmalloc() failed\n\n");

            exit(1);
        }

        rect->width = width;
        rect->height = height;

        rect->draw = drawRect;
        rect->delete = deleteRect;

        return rect;
    }

    void drawRect(Rect* rect)
    {
        if (rect == NULL)
        {
            printf("\n\ndrawRect: Rect is NULL\n\n");

            return;
        }

        for (int y = 0; y < rect->height; y++)
        {
            for (int x = 0; x < rect->width; x++)
            {
                printf("#");
            }

            printf("\n");
        }

        printf("\n");
    }

    void deleteRect(Rect* rect)
    {
        if (rect == NULL)
        {
            printf("\n\ndeleteRect: Rect is NULL\n\n");

            return;
        }

        free(rect);
    }
#endif