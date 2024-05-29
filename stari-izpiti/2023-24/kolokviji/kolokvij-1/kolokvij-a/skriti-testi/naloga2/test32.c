
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 170;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "A0pw7ulynjydnz6pOED5q1xzRyPIe8SyoEVjCDYq7oSYbJyuTyDwIK0Hsb9U8KQbhKrsD_G8Vd7");
    izdelaj(nizi, 1, "A0pw7ulynjydnz6pOED5q1xzRyPIe8SyoEVjCDYq7oSYbJyuTyDwIK0Hsb9U8KQbhKrsD_G8Vd7");
    izdelaj(nizi, 2, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 3, "VOuIA4VA2LTOzmN3RyUBlvZeifKllMCagSDYKc4F6fX3UbJARIDl4tpvmqX0tV1jAGsB1WSXOPm");
    izdelaj(nizi, 4, "9JDgsqWQd52S4snSuXr5ggWAJAAqApGBGSydJVLbDV7p3YmuJSYyk");
    izdelaj(nizi, 5, "A0pw7ulynjydnz6pOED5q1xzRyPIe8SyoEVjCDYq7oSYbJyuTyDwIK0Hsb9U8KQbhKrsD_G8Vd7");
    izdelaj(nizi, 6, "GSEXPtnvX40m_E6FzlVKdx33keK95Vn4chFTTzBqAbuohIgyVr4ho4922");
    izdelaj(nizi, 7, "VOuIA4VA2LTOzmN3RyUBlvZeifKllMCagSDYKc4F6fX3UbJARIDl4tpvmqX0tV1jAGsB1WSXOPm");
    izdelaj(nizi, 8, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 9, "36lrz0Xp2arB8UBecLnFJz9I6YG0n9gB6sCWAgbJxXS2X0sgLzlEjurGxm7NylgpAlCr2_Fq6J3mnPBRsqauiG");
    izdelaj(nizi, 10, "Q9RdET159Ogs_Unb5AGg5fGdur");
    izdelaj(nizi, 11, "hptjdGaIWBEEtuRFp3RHK");
    izdelaj(nizi, 12, "VOuIA4VA2LTOzmN3RyUBlvZeifKllMCagSDYKc4F6fX3UbJARIDl4tpvmqX0tV1jAGsB1WSXOPm");
    izdelaj(nizi, 13, "9JDgsqWQd52S4snSuXr5ggWAJAAqApGBGSydJVLbDV7p3YmuJSYyk");
    izdelaj(nizi, 14, "EYRlAtCMcMFequrMo1MREtrqxGVl_az65kGm4TvxKM6sF0j0B3AMNz3lrn6N0X9jAqlMiiQmq3RenGfabPCXLDJu59Lc5biHNtW");
    izdelaj(nizi, 15, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 16, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 17, "36lrz0Xp2arB8UBecLnFJz9I6YG0n9gB6sCWAgbJxXS2X0sgLzlEjurGxm7NylgpAlCr2_Fq6J3mnPBRsqauiG");
    izdelaj(nizi, 18, "yF9kQoEku1L8dyKUX7ao");
    izdelaj(nizi, 19, "8Q_ZEMYPq7QtKj1IKZQuT8PEfQxHjSF6Z8yTwpdz8sfp9jFtLwNMoN1Nym6RnZ");
    izdelaj(nizi, 20, "36lrz0Xp2arB8UBecLnFJz9I6YG0n9gB6sCWAgbJxXS2X0sgLzlEjurGxm7NylgpAlCr2_Fq6J3mnPBRsqauiG");
    izdelaj(nizi, 21, "hptjdGaIWBEEtuRFp3RHK");
    izdelaj(nizi, 22, "VewD7hIAnkIXXZCoDTX4NZWlGzaDD_7D2kPCX6cBP0DZtuEO9mYZ8BwxkugIU6dQs4IyU0tjh1ic1BFkyGDOWliqnc4xj9f");
    izdelaj(nizi, 23, "I5hunSTkKC5kX1IxVUDWnSIfHqP_b3dG8P");
    izdelaj(nizi, 24, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 25, "piO8qtFL7Vo4wGMNrWhZn5hjNMNmEofy3_pzfRAMkZfdVLp0H9qhQotoiYJ6hN7JTiZtVpgdOhXBS6WibrQ6iC");
    izdelaj(nizi, 26, "lq49sQz1ZR9sP_lxvz5n93A3wndAT0kE8OyhUxWFlR_AQJFoeX2M8K");
    izdelaj(nizi, 27, "47eqE2XSb");
    izdelaj(nizi, 28, "SYpLh8AKkfBCtti4NgdID0FRtHMjpQyYa0CtTKFHwig");
    izdelaj(nizi, 29, "dcSGdZwH7A3z1DIeNXN7dKBdoT");
    izdelaj(nizi, 30, "bnFB2z4giApVqbZxS0_JRQY4LzlSKbZlGRBA3OHUFjnWD1DXZHk6ZyDUEyAbi4pgtxaXaL8DZKcRpnYb5EWMQgukUDwk");
    izdelaj(nizi, 31, "xKHPFA47egJ_7awKt3irQalVQpEo29WHBOaQZhQLcM0Ig66X1OtxrW8h5J8b2VP__KJTP4zh3TY3FN");
    izdelaj(nizi, 32, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 33, "VewD7hIAnkIXXZCoDTX4NZWlGzaDD_7D2kPCX6cBP0DZtuEO9mYZ8BwxkugIU6dQs4IyU0tjh1ic1BFkyGDOWliqnc4xj9f");
    izdelaj(nizi, 34, "HZbtMVYRQVSCoRbLFmGE_hLsAOxfpyKtMaTL2NM");
    izdelaj(nizi, 35, "DEr5MCNdy__DDuBEJbBNN1rr8hoSs_6xTUI20AfWeAqcAcDp_7FHzbsBJXnAtfMrSp3ogMFSnSZM0wY05642bmzY");
    izdelaj(nizi, 36, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 37, "A0pw7ulynjydnz6pOED5q1xzRyPIe8SyoEVjCDYq7oSYbJyuTyDwIK0Hsb9U8KQbhKrsD_G8Vd7");
    izdelaj(nizi, 38, "k4U73ADrf9PtCP0IT0ZC5MzKQglFK37mpV9q17iVJeYQK");
    izdelaj(nizi, 39, "_j");
    izdelaj(nizi, 40, "SKKnNQ2pPEHmTxIojRc4m8k8MG_Hi8AsFJ3JZks8vNL4CZMWCri4mlfVI1vYTjsi");
    izdelaj(nizi, 41, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 42, "Ik_aCGLOHT1duaODoJMXGX");
    izdelaj(nizi, 43, "A0pw7ulynjydnz6pOED5q1xzRyPIe8SyoEVjCDYq7oSYbJyuTyDwIK0Hsb9U8KQbhKrsD_G8Vd7");
    izdelaj(nizi, 44, "hptjdGaIWBEEtuRFp3RHK");
    izdelaj(nizi, 45, "gCk_s8eK");
    izdelaj(nizi, 46, "bnFB2z4giApVqbZxS0_JRQY4LzlSKbZlGRBA3OHUFjnWD1DXZHk6ZyDUEyAbi4pgtxaXaL8DZKcRpnYb5EWMQgukUDwk");
    izdelaj(nizi, 47, "GSEXPtnvX40m_E6FzlVKdx33keK95Vn4chFTTzBqAbuohIgyVr4ho4922");
    izdelaj(nizi, 48, "LBgFPq3wvHz486cbhZLBlH9vOcBenTOPWuN");
    izdelaj(nizi, 49, "wilp02scY5r7w_sDEKN3BWyiIWKPmq");
    izdelaj(nizi, 50, "sHO4t9wWbWBuvHo");
    izdelaj(nizi, 51, "Q9RdET159Ogs_Unb5AGg5fGdur");
    izdelaj(nizi, 52, "PKdwJxS6yyZbo_GHSpPb0HOP7_AxJTJ");
    izdelaj(nizi, 53, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 54, "mgUy4PQYio");
    izdelaj(nizi, 55, "piO8qtFL7Vo4wGMNrWhZn5hjNMNmEofy3_pzfRAMkZfdVLp0H9qhQotoiYJ6hN7JTiZtVpgdOhXBS6WibrQ6iC");
    izdelaj(nizi, 56, "Ik_aCGLOHT1duaODoJMXGX");
    izdelaj(nizi, 57, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 58, "sFDmw1_cE7n7pU8GHXpQhqebbpYVO4waseKLiU4bqnHjYYzQrmy3jkjLDt1GiN_Vby1kS2w0looK3oFnJ8e_xLKBcGEfRkR0Iqd");
    izdelaj(nizi, 59, "D9JLdFncQaKadWxlHoo2P3kyCRVemV6xTR93Bd92v0ImmrACGQyAI4gaOSPY4fba9v4xTuTH6wkJZ0f4pFOnGbYtG");
    izdelaj(nizi, 60, "KvMrWSPmdFzOypa01c3XcCGbcnJWYigeD5tgGkgQQYccmV3P9iPwgjOJ");
    izdelaj(nizi, 61, "bAnqpu0cbMae76FfUwZqhUf5sJlG1FxzH_psZzkatuZ_8hTIIltpnmnka_hzo46oxzkzCezoJlidOMdgdPiVTaZYXsU1");
    izdelaj(nizi, 62, "suDzwEsj1MOWVYScdR1l8");
    izdelaj(nizi, 63, "CahYo");
    izdelaj(nizi, 64, "9PRsTp5aU23QfWBcJmIW4N");
    izdelaj(nizi, 65, "gq4zF4uUSSfrgOlqm");
    izdelaj(nizi, 66, "piO8qtFL7Vo4wGMNrWhZn5hjNMNmEofy3_pzfRAMkZfdVLp0H9qhQotoiYJ6hN7JTiZtVpgdOhXBS6WibrQ6iC");
    izdelaj(nizi, 67, "suDzwEsj1MOWVYScdR1l8");
    izdelaj(nizi, 68, "piO8qtFL7Vo4wGMNrWhZn5hjNMNmEofy3_pzfRAMkZfdVLp0H9qhQotoiYJ6hN7JTiZtVpgdOhXBS6WibrQ6iC");
    izdelaj(nizi, 69, "J4AxB442nXGm8xLHv1HMs8rQHXJTcV31LPRa7LDIm");
    izdelaj(nizi, 70, "5styi");
    izdelaj(nizi, 71, "47eqE2XSb");
    izdelaj(nizi, 72, "ThDbDNT8");
    izdelaj(nizi, 73, "gq4zF4uUSSfrgOlqm");
    izdelaj(nizi, 74, "SYpLh8AKkfBCtti4NgdID0FRtHMjpQyYa0CtTKFHwig");
    izdelaj(nizi, 75, "JaJttSTZk5DlbqPvw4hZ7vwTeb2zLKH99SXAkqntWwiFqdlX01rVetZShU");
    izdelaj(nizi, 76, "8Q_ZEMYPq7QtKj1IKZQuT8PEfQxHjSF6Z8yTwpdz8sfp9jFtLwNMoN1Nym6RnZ");
    izdelaj(nizi, 77, "BSc_F7jBrB4UBFHA3owC8OfAofhvORTVESj4t6_HyrYAS");
    izdelaj(nizi, 78, "dwHopfGHT7FkvMc89Q9o98eproRVvBtaXt_ARvbKd4r3MsN0huio2");
    izdelaj(nizi, 79, "QyJTzTIRdSSgQnKzcjxmEzpOyOnptIGp7Kt7LxL8ZZ4HTKUMtyQG");
    izdelaj(nizi, 80, "AcAAKXGQeA0HMIazAGPEHMuHAF6o5N5l_KYh6FGj1T");
    izdelaj(nizi, 81, "AFQ2Ocb500dHueBVwkiIQVlKHCMMBnMleaGeiFZSyX_ZGymQeFel5Zn6PmqTyumudIH75M");
    izdelaj(nizi, 82, "Xh6K7fXpDToTsSxR2LgpQ_R9LLVgYbl7TOe07u481f0QySP4IzUtFACUc3SxfKwpkcKqxN4Gc");
    izdelaj(nizi, 83, "w8ARDIpV7NkRR51CRgTPiyPdZCe5IueyqsKRBOiijtBdYUYqh3MB873K0HMQstru9C7ppcWc");
    izdelaj(nizi, 84, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 85, "w");
    izdelaj(nizi, 86, "zgegRBE8s5MgKsQXvCdefSwXl2m4FafDfygkplPpjL");
    izdelaj(nizi, 87, "yqiqWFIswW8kwAvqrfqP8yLshaDLdKtDP1MF9kCp5hq0Ctgujrwv2DcNgMx7pV1yZUn5RU5LKEdq");
    izdelaj(nizi, 88, "_j");
    izdelaj(nizi, 89, "06TybSTMibniUZXRwcq8ImTVbwQVGdpTYtZpoCPCisTwl7tgj8WtIadysS_R");
    izdelaj(nizi, 90, "9PRsTp5aU23QfWBcJmIW4N");
    izdelaj(nizi, 91, "gq4zF4uUSSfrgOlqm");
    izdelaj(nizi, 92, "1btBB9DeSxeVVm0X6At3kPFWir3ZFWApG");
    izdelaj(nizi, 93, "zgAh5a_8NOGgpBYAFdYGVeiIii3F5tzhMk_QhKG8Nrquj6Ow10nbq_nzfNB0AG0xTjEgSsq8wIIYNnVdjMrKGeVOE");
    izdelaj(nizi, 94, "fTb89HUjtcA2BQ3KirrvnZaMzNIGfJZxBW7oO4oSeVjIcmnw5xeJPSqDinG2QlJZ5O9bsWvH6h9vZ4urLBHDmR3zEKOvJ_4foig");
    izdelaj(nizi, 95, "SKKnNQ2pPEHmTxIojRc4m8k8MG_Hi8AsFJ3JZks8vNL4CZMWCri4mlfVI1vYTjsi");
    izdelaj(nizi, 96, "b0p7NzIB2Zo3Cg6FiWscmr6YnTHh14MANMETk9WN2k4PAVY3QUEFSIEw536D8aCfPw0C3TR1IeDN");
    izdelaj(nizi, 97, "xcY4BZHq2W7jEF9oy2B7nrTaOXpu35InPnv0KeSEzt5Wdq3q8v9gFVSgoxg3HLTPcyTo6WaYSSxD3vppouRZgc");
    izdelaj(nizi, 98, "gCk_s8eK");
    izdelaj(nizi, 99, "obYrA7RkhHXlHWJO07awQulTPQY_iBttJfiPtcqr4YzldQeuhKNjfkm3YRm");
    izdelaj(nizi, 100, "fLEoaPIHJCYGuCt2O8H3lEZx0bJu");
    izdelaj(nizi, 101, "xkunWMacZ_o0dJaZs_mtoGvRAAJw4WCodIrfT_dRaSGKnIZWoopOD3qYd8YkoRNo0P1NScBkbOlTs_");
    izdelaj(nizi, 102, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 103, "xcY4BZHq2W7jEF9oy2B7nrTaOXpu35InPnv0KeSEzt5Wdq3q8v9gFVSgoxg3HLTPcyTo6WaYSSxD3vppouRZgc");
    izdelaj(nizi, 104, "6oGQ4jVtNVI3qK3Q02db7SjnnHP1wQfsZOqMIknzNhpJ0lICPc");
    izdelaj(nizi, 105, "WA36ykiGUeJFgZh3Ob42d7_NNTl0tUv5Aoc2_gaPnhwfqqKpPo9MUknjhQjow3XUdDsZy_EdyEzy_9yh8eJ0mGyoRDg");
    izdelaj(nizi, 106, "17_6SofkqUe4PUKq5o3jsq3xII3fJrNx8nzQmEWqDhmkNXonZbjzLUWZ0tSMyQWakPNZgri3ihQyaW2jk1tjqC3ujv_eYWx");
    izdelaj(nizi, 107, "xKHPFA47egJ_7awKt3irQalVQpEo29WHBOaQZhQLcM0Ig66X1OtxrW8h5J8b2VP__KJTP4zh3TY3FN");
    izdelaj(nizi, 108, "BjrYZUTFiY4vlSUmQoSbU9napcvoMN0nkhAdaYWxuKCCKOe25gumDmbMALZVb3rmOfv0q2toj");
    izdelaj(nizi, 109, "QekpsTQmmG6JuuVyKBsj5k6MvCt1_xX5ihOHl5tNcy1ZNbYdV0lpl06823mVKGARdzZRQznCBiwSnR4Xj2Djxzw");
    izdelaj(nizi, 110, "fLEoaPIHJCYGuCt2O8H3lEZx0bJu");
    izdelaj(nizi, 111, "qy6zlmoEu1SzQiMj7qyvpMdoiQbrp9");
    izdelaj(nizi, 112, "LBgFPq3wvHz486cbhZLBlH9vOcBenTOPWuN");
    izdelaj(nizi, 113, "5A_td5duwfMVa5eO74VRdp0C2r5Ku5ISkcgcpUaVW");
    izdelaj(nizi, 114, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 115, "TL_rL");
    izdelaj(nizi, 116, "33t_yaVntgOGhXOYaOc98duxB_KXTV7BmJ_xsAJxDXw5k6SQFqhnE");
    izdelaj(nizi, 117, "xcY4BZHq2W7jEF9oy2B7nrTaOXpu35InPnv0KeSEzt5Wdq3q8v9gFVSgoxg3HLTPcyTo6WaYSSxD3vppouRZgc");
    izdelaj(nizi, 118, "xKHPFA47egJ_7awKt3irQalVQpEo29WHBOaQZhQLcM0Ig66X1OtxrW8h5J8b2VP__KJTP4zh3TY3FN");
    izdelaj(nizi, 119, "Z69HqIBl");
    izdelaj(nizi, 120, "J3w7a4mY9Wcetp8HkImEVF");
    izdelaj(nizi, 121, "J3w7a4mY9Wcetp8HkImEVF");
    izdelaj(nizi, 122, "lq49sQz1ZR9sP_lxvz5n93A3wndAT0kE8OyhUxWFlR_AQJFoeX2M8K");
    izdelaj(nizi, 123, "XIdpMqQzAyW8KQLub0mnGwBUSCjVm0LdimoEsZo3RhChdUzqJDDoR622OWVWVU2o2vtVJykHvYvTBmBg6");
    izdelaj(nizi, 124, "q61U9GuZZZgUEJh6MgypWANhMAOQcv0N6f6");
    izdelaj(nizi, 125, "lMLCx99kTE9AwjHZzKJg6t25cq8jHWs7xStQhlPU3ApMPcnenMC4IM0sFrNZGRzfnVghBGYDRAZ2");
    izdelaj(nizi, 126, "O85rCEvUu1tiZYBAhE3FPtdEXz4ZzWT9AxXpcBK2MAfMNdXvXYIZYCYyjmcZiA0uh");
    izdelaj(nizi, 127, "zQzjHKqEjwxmaOCb6VCS");
    izdelaj(nizi, 128, "wilp02scY5r7w_sDEKN3BWyiIWKPmq");
    izdelaj(nizi, 129, "Ua79pDGTu_a");
    izdelaj(nizi, 130, "797IYFCRhf0TSHzx2NGbC8HUtgVzc3KHq_TWh4N4wpY18bvqUYAehvsX");
    izdelaj(nizi, 131, "xkunWMacZ_o0dJaZs_mtoGvRAAJw4WCodIrfT_dRaSGKnIZWoopOD3qYd8YkoRNo0P1NScBkbOlTs_");
    izdelaj(nizi, 132, "hptjdGaIWBEEtuRFp3RHK");
    izdelaj(nizi, 133, "FAV9fMaPgnwtr51ImgbBupXZHRieXHm71LRWMeYgJlC3yuUsgo6qgv7N3oqNSHzaGpxiiOi0OmEDpRZgu8w8");
    izdelaj(nizi, 134, "QQXxT6O9R06Zs7MWpmGZx1TGuySda2qReTxmje8SC");
    izdelaj(nizi, 135, "dcSGdZwH7A3z1DIeNXN7dKBdoT");
    izdelaj(nizi, 136, "GcnytSRU0IEt86hRsNbbyv841kqRbo6PrWhCq_gASYPuj");
    izdelaj(nizi, 137, "kCeRjyzfDDN7ti20Fe5nZuIeSbm7EjUHf1sdpDkK8rT5inn7p2nzxrURIeQ6SWkWxPymo6FEKewOE1dK1wFLF3kWNZ2");
    izdelaj(nizi, 138, "DEr5MCNdy__DDuBEJbBNN1rr8hoSs_6xTUI20AfWeAqcAcDp_7FHzbsBJXnAtfMrSp3ogMFSnSZM0wY05642bmzY");
    izdelaj(nizi, 139, "7tj_QmIa4J_O7h_lgM9blXtGZaiYj1kfynBNcGvsoR02nCWmCGL4s2e6cs");
    izdelaj(nizi, 140, "U0i8v5cUU8Wld0t3FehMA4EnaViV45aQKBepfE");
    izdelaj(nizi, 141, "aS37AVuJi2");
    izdelaj(nizi, 142, "fYDw25uZ528fKXu6YfdM2uj");
    izdelaj(nizi, 143, "8Q_ZEMYPq7QtKj1IKZQuT8PEfQxHjSF6Z8yTwpdz8sfp9jFtLwNMoN1Nym6RnZ");
    izdelaj(nizi, 144, "kZuAEQ5dlzDa");
    izdelaj(nizi, 145, "_13X_gT0esN_Vi7MkpGaYXW_Ho8ZLwa1QgBhtQL0o7YrI_yTOZ5MCrfPuiLP7wJ6vaczr8d_cfn3kNpRiek1HM7a_biuMgTG");
    izdelaj(nizi, 146, "J3w7a4mY9Wcetp8HkImEVF");
    izdelaj(nizi, 147, "bbANpN0ax4CTcQtOzY3y1XjKm_5oGA9Y_HcbqHHTK03p2nyUizef_OKmyDqQOt8ykwLMGp");
    izdelaj(nizi, 148, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 149, "zQzjHKqEjwxmaOCb6VCS");
    izdelaj(nizi, 150, "PIZpmSWRTXei6tNCRttJor0M0");
    izdelaj(nizi, 151, "1pC9U9t3HnI7cv_dCnBV4aWCJlEZcWrcws2gS8lnI2qAKMUvK7EBoDM99d3aIYcd8UCJ4nz1lNkeOnUMj1ToMzIJUN");
    izdelaj(nizi, 152, "mSqQB");
    izdelaj(nizi, 153, "zYmJQ0a5mzFv2Z2wp48qpSOa0s95Xbq4T50vw75DQs8BnVyt95BLc9D2EVtWhXsBNyBsXNsW0pWwp8i2gNiZCvdZ1Sv5YG");
    izdelaj(nizi, 154, "SYpLh8AKkfBCtti4NgdID0FRtHMjpQyYa0CtTKFHwig");
    izdelaj(nizi, 155, "ThDbDNT8");
    izdelaj(nizi, 156, "DhBWcXcr9tNmwDmE3R25q8h0GWACqgrEmfTAYlkvXl1CMYqH9EoBu2WH89IGwbuCDVV5qcNfk9N4RQqmF5GHh4tr6Vn99M");
    izdelaj(nizi, 157, "k4U73ADrf9PtCP0IT0ZC5MzKQglFK37mpV9q17iVJeYQK");
    izdelaj(nizi, 158, "2AH");
    izdelaj(nizi, 159, "wOEIz5dK2tJBzG_JeG2kn8witPb0JdN40pq3Vtad");
    izdelaj(nizi, 160, "kARodWM0Gdy4ogZcrCtbB0WJ_I2S_1X5RENulVyCfsmsjvuQkZ2fVdiXiemV_WaBcpqEGKQqyY28Nmf");
    izdelaj(nizi, 161, "GSEXPtnvX40m_E6FzlVKdx33keK95Vn4chFTTzBqAbuohIgyVr4ho4922");
    izdelaj(nizi, 162, "bAnqpu0cbMae76FfUwZqhUf5sJlG1FxzH_psZzkatuZ_8hTIIltpnmnka_hzo46oxzkzCezoJlidOMdgdPiVTaZYXsU1");
    izdelaj(nizi, 163, "dcSGdZwH7A3z1DIeNXN7dKBdoT");
    izdelaj(nizi, 164, "5gZg1m3X0gNs0WPqBFsxp5WNVOaAFJdRnX4xKYVufajKls_inHyX6BNMOrtKuesrVcHaVICbAEdu0E");
    izdelaj(nizi, 165, "SYpLh8AKkfBCtti4NgdID0FRtHMjpQyYa0CtTKFHwig");
    izdelaj(nizi, 166, "36lrz0Xp2arB8UBecLnFJz9I6YG0n9gB6sCWAgbJxXS2X0sgLzlEjurGxm7NylgpAlCr2_Fq6J3mnPBRsqauiG");
    izdelaj(nizi, 167, "Szese5i16x4tMA9C9aGoJ");
    izdelaj(nizi, 168, "o1qbcAANQZq1Xy22lZi2uP31dCj2AOiFtC7rMhNOGYqEyTe4e9qybW4xxC2NmKeFQAW400RTT_F9eO_8O9vDWewsE");
    izdelaj(nizi, 169, "BSc_F7jBrB4UBFHA3owC8OfAofhvORTVESj4t6_HyrYAS");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
