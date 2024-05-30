#ifndef _RectClass_h_
#define _RectClass_h_
    typedef struct
    {
        Rect* this;
        int dotPos[4][2];


        void (*draw)();
    }Rect

    Rect* newRect(int* First[2],int* Second[2], int* Third[2], int* Fourth[2])
    {
        Rect* temp = (Rect*)malloc(sizeof(Rect));

        temp->dotPos = {{First[0], First[1]}, {Second[0], Second[1]}, {Third[0], Third[1]}, {Fourth[0], Fourth[1]}};
        temp->this = temp;
        temp->draw = draw_;

        return temp;
    }

    void draw_(const Rect* this)
    {
        for(int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                for(int k = 0; k < 4; k++)
                {
                    if(this->dotPos[k][0] == i && this->dotPos[k][1] == j)
                        printf("#");
                    else
                        printf("_");
                }
            }
        }

        return;
    }

    void deleteRect(Rect* Rect_ptr)
    {
        free(Rect_ptr);

        return;
    }
#endif _RectClass_h_
