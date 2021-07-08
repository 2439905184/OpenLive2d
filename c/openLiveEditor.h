
// 基础live顶点结构
typedef struct 
{
    live_point origin_pos;
    live_point current_pos;
    live_point normal;
    live_point beginTranslation;
    live_point endTranslation;
    live_point velocity;
    int k;
    // uv范围0-1f
    float u,v;
} live_vertex;
typedef struct _live_point
{
    float x;
    float y;
    float z;
} live_point;
// 图元三角形
typedef struct 
{
    int index1;
    int index2;
    int index3;
}live_triangle;
// 材质贴图
typedef struct 
{
    Texture;
    int textureOffsetX;
    int textureOffsetY;
}LiveTexture;
void editor_start();
void build_mesh();
// 添加边界点
void add_mesh_point_edge();