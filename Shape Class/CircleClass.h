#ifndef _CircleClass_h_
    #define _CircleClass_h_
    
    typedef struct Circle
    {
        unsigned int _radius;

        void (*draw)(struct Circle* _circle);
        void (*delete)(struct Circle* _circle);
    } Circle;

    Circle* newCircle(unsigned int _radius);
    void drawCircle(Circle* _circle);
    void deleteCircle(Circle* _circle);

    Circle* newCircle(unsigned int _radius)
    {
        Circle* _circle = (Circle* )malloc(sizeof(Circle));

        if (_circle == NULL)
        {
            printf("\n\nmalloc() failed\n\n");

            exit(1);
        }

        _circle->_radius = _radius;

        _circle->draw = drawCircle;
        _circle->delete = deleteCircle;

        return _circle;
    }

    void drawCircle(Circle* _circle)
    {
        if (_circle == NULL)
        {
            printf("\n\ndrawCircle: Circle is NULL\n\n");

            return;
        }

        for (unsigned long int y = 0; y < _circle->_radius * 2; y++)
        {
            for (unsigned long int x = 0; x < _circle->_radius * 2; x++)
            {
                if (pow(x - _circle->_radius, 2) + pow(y - _circle->_radius, 2) <= pow(_circle->_radius, 2))
                {
                    printf("@");
                } else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }

        printf("\n");
    }

    void deleteCircle(Circle* _circle)
    {
        if (_circle == NULL)
        {
            printf("\n\ndeleteCircle: Circle is NULL\n\n");

            return;
        }

        free(_circle);
    }
#endif