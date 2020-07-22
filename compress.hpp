#include <cstdio>
#include <cstring>
#include <cstdlib>

void encode(int h, int w, void *_data, const char *path)
{
    unsigned char data[h][w][3];
    memcpy(data, _data, sizeof(data));

    // TODO begin
    FILE *fp=NULL;
    fp = fopen(path, "wb+");
    fseek(fp,0,SEEK_SET);
    fwrite(&h,sizeof(int),1,fp);
    fwrite(&w,sizeof(int),1,fp);
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            for (int k = 0; k < 3; k++)
                fwrite(&data[i][j][k], sizeof(unsigned char),1,fp);
    fclose(fp);
    // end
}

void decode(const char *path, int &h, int &w, void *_data)
{
    // TODO begin

    FILE *fp=NULL;
    fp = fopen(path, "rb+");
    fseek(fp,0,SEEK_SET);
    fread(&h,sizeof(int),1,fp);
    fread(&w,sizeof(int),1,fp);
    unsigned char data[h][w][3];

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                fread(&data[i][j][k],sizeof(unsigned char),1,fp);
            }
        }
    fclose(fp);
    // end
    memcpy(_data, data, sizeof(data));
}