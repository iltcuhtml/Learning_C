#ifndef _RectClass_h_
#define _RectClass_h_
    typedef struct Rect
    {
        unsigned int width, height;

        void (*draw)();
    }Rect;

    Rect newRect(unsigned int width, unsigned int height);
    void draw_(const Rect obj);
    void deleteRect(Rect obj_ptr);

    Rect newRect(unsigned int width, unsigned int height)
    {
        Rect *temp = malloc(sizeof(Rect));

        temp->width = width;
        temp->height = height;

        temp->draw = draw_;

        return *temp;
    }

    void draw_(const Rect obj)
    {
        for(int y = 0; y < obj.height; y++)
        {
            for (int x = 0; x < obj.width; x++)
            {
                printf("#");
            }

            printf("\n");
        }

        printf("\n");

        return;
    }

    void deleteRect(Rect obj_ptr)
    {
        free(&obj_ptr);

        return;
    }
#endif
