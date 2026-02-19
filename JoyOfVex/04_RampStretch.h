float d = length(@P);
d *= ch('scale');
d += @Time;
d = sin(d);
d = fit(d, -1, 1, 0, 1);

@P.y = chramp('myramp', d);
@P.y *= ch('height');

fit01(rand(detail("../foreach_end2", "iterations". 0)), 4, 8)