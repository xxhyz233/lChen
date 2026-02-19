// length() gives the distance from given point to the origin {0,0,0}
vector center = chv('center');
vector pos = @P * chv('Scaling');
float d = distance(pos, center);
d *= ch('scale');
@Cd = (sin(d)+1)/2;