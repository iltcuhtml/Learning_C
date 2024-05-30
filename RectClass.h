#ifndef _RectClass_h_
#define _RectClass_h_
    typedef struct Rect
    {
        struct Rect* this;
        
        unsigned int height, width;

        void (*draw)();
    }Rect;

    Rect* newRect(unsigned int height, unsigned int width);
    void draw_(const Rect* this);

    Rect* newRect(unsigned int height, unsigned int width)
    {
        Rect* temp = malloc(sizeof(Rect));

        temp->this = temp;

        temp->height = height;
        temp->width = width;

        temp->draw = draw_;

        return temp;
    }

    void draw_(const Rect* this)
    {
        for(int y = 0; y < this->height; y++)
        {
            for (int x = 0; x < this->width; x++)
            {
                printf("#");
            }

            printf("\n");
        }

        printf("\n");

        return;
    }

    void deleteRect(Rect* Rect_ptr)
    {
        free(Rect_ptr);

        return;
    }
#endif