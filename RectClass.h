#ifndef _RectClass_h_
    #define _RectClass_h_
    
    typedef struct Rect
    {
        unsigned int _width, _height;

        void (*draw)(struct Rect* _rect);
        void (*delete)(struct Rect* _rect);
    } Rect;

    Rect* newRect(unsigned int _width, unsigned int _height);
    void drawRect(Rect* _rect);
    void deleteRect(Rect* _rect);

    Rect* newRect(unsigned int _width, unsigned int _height)
    {
        Rect* _rect = (Rect* )malloc(sizeof(Rect));

        if (_rect == NULL)
        {
            printf("\n\nmalloc() failed\n\n");

            exit(1);
        }

        _rect->_width = _width;
        _rect->_height = _height;

        _rect->draw = drawRect;
        _rect->delete = deleteRect;

        return _rect;
    }

    void drawRect(Rect* _rect)
    {
        if (_rect == NULL)
        {
            printf("\n\ndrawRect: Rect is NULL\n\n");

            return;
        }

        for (unsigned int y = 0; y < _rect->_height; y++)
        {
            for (unsigned int x = 0; x < _rect->_width; x++)
            {
                printf("#");
            }

            printf("\n");
        }

        printf("\n");
    }

    void deleteRect(Rect* _rect)
    {
        if (_rect == NULL)
        {
            printf("\n\ndeleteRect: Rect is NULL\n\n");

            return;
        }

        free(_rect);
    }
#endif