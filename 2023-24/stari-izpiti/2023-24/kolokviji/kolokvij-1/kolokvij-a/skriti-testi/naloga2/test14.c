
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
    int n = 143;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 1, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 2, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 3, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 4, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 5, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 6, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 7, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 8, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 9, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 10, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 11, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 12, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 13, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 14, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 15, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 16, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 17, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 18, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 19, "uefxk1N1q4GvqOt_0kjF7j5ZAw_dDrQrA5B3SvitUylO_RfP0RNDwIbsOifu7wYwhjHbT03i1Xg");
    izdelaj(nizi, 20, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 21, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 22, "eWWNd3dDMcnUBjnCH4gHhtStdVX7l1WM2uaYBpFAXRQna2yg");
    izdelaj(nizi, 23, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 24, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 25, "uefxk1N1q4GvqOt_0kjF7j5ZAw_dDrQrA5B3SvitUylO_RfP0RNDwIbsOifu7wYwhjHbT03i1Xg");
    izdelaj(nizi, 26, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 27, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 28, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 29, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 30, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 31, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 32, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 33, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 34, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 35, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 36, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 37, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 38, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 39, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 40, "xC_I_eaC6GGaIwM");
    izdelaj(nizi, 41, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 42, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 43, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 44, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 45, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 46, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 47, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 48, "xPp5jlutpqwcYMsDHOuMEENa67t1zSEwDiuHN5WHSdoYVaTvwD2PtDY4l7d902Nc4r0LKNXCfc5kE_ecWNpSDT33dUPV2b79CmV8");
    izdelaj(nizi, 49, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 50, "sfZp64PEyoqrqzjqQFh5M_XdXsV4JVIdBFr2h5XXvXqmJ_4YcTOItt0gd1W7BEUpcPP3MzwtEokwJDm0k");
    izdelaj(nizi, 51, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 52, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 53, "onulT4vbamw78cBH4a01VVd4R10sh50vlRb1EMF1FPx6t7BJMFG39gkdUICgZ6ZK7R");
    izdelaj(nizi, 54, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 55, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 56, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 57, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 58, "uefxk1N1q4GvqOt_0kjF7j5ZAw_dDrQrA5B3SvitUylO_RfP0RNDwIbsOifu7wYwhjHbT03i1Xg");
    izdelaj(nizi, 59, "aVYT2g3UwQYU_MaZ");
    izdelaj(nizi, 60, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 61, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 62, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 63, "YIKqVeYMst2UlUFX5znk5oRwk5dZRdBFUf7COO9NLrF5vN5wLHxhtRZLwHTrU");
    izdelaj(nizi, 64, "uefxk1N1q4GvqOt_0kjF7j5ZAw_dDrQrA5B3SvitUylO_RfP0RNDwIbsOifu7wYwhjHbT03i1Xg");
    izdelaj(nizi, 65, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 66, "zIoTnkMpbOD33BDeDkhBF8LGM");
    izdelaj(nizi, 67, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 68, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 69, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 70, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 71, "onulT4vbamw78cBH4a01VVd4R10sh50vlRb1EMF1FPx6t7BJMFG39gkdUICgZ6ZK7R");
    izdelaj(nizi, 72, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 73, "kndBzilhyxtWAAJEWAEetlAVYQS9iNDIROHxbrYoGLqnnrnTv");
    izdelaj(nizi, 74, "D0302c0ELGjVmEkNPAEIMSh0OWgpqgGw2aIijUmSO");
    izdelaj(nizi, 75, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 76, "eWWNd3dDMcnUBjnCH4gHhtStdVX7l1WM2uaYBpFAXRQna2yg");
    izdelaj(nizi, 77, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 78, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 79, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 80, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 81, "eWWNd3dDMcnUBjnCH4gHhtStdVX7l1WM2uaYBpFAXRQna2yg");
    izdelaj(nizi, 82, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 83, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 84, "kQrQjSIZessM2f");
    izdelaj(nizi, 85, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 86, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 87, "K3AebROCC4v4EpPU");
    izdelaj(nizi, 88, "CEHOFEmyz_qLLiy");
    izdelaj(nizi, 89, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 90, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 91, "9rzy27DZYvvmkrU42FUleBKXiNVPn1Desg6R44C0qTlbWM2ImcAGNBRYLCqPZbxXwfnP9NXuh");
    izdelaj(nizi, 92, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 93, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 94, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 95, "D0302c0ELGjVmEkNPAEIMSh0OWgpqgGw2aIijUmSO");
    izdelaj(nizi, 96, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 97, "dR62vNa4epbm9_ZlXG4yITcYi2Co7Es");
    izdelaj(nizi, 98, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 99, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 100, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 101, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 102, "eWWNd3dDMcnUBjnCH4gHhtStdVX7l1WM2uaYBpFAXRQna2yg");
    izdelaj(nizi, 103, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 104, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 105, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 106, "1sTWmh9JLDMwrVRqn89rtj8I_jRLZrGvlT0JEeXTM5Z7anSbS2HgwD8KxAOrnd9EYKf0RDprnOpn6vhAqBhc");
    izdelaj(nizi, 107, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 108, "NWi2hjztdR90fZgX4VahRArdZE3zqUBMdCEzo4TtAU_0rYJNEUxXbMLDmlFfo79o3fZe1aW5qkv");
    izdelaj(nizi, 109, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 110, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 111, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 112, "kQrQjSIZessM2f");
    izdelaj(nizi, 113, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 114, "dR62vNa4epbm9_ZlXG4yITcYi2Co7Es");
    izdelaj(nizi, 115, "sfZp64PEyoqrqzjqQFh5M_XdXsV4JVIdBFr2h5XXvXqmJ_4YcTOItt0gd1W7BEUpcPP3MzwtEokwJDm0k");
    izdelaj(nizi, 116, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 117, "I0dkT86ZQB2cBBvLYzpHiLk1NEiK1Tq7P6OQ8MKZqP2FIG86YYuvy1eb8kUAxgxOiVcIriJOMY");
    izdelaj(nizi, 118, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 119, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 120, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 121, "zIoTnkMpbOD33BDeDkhBF8LGM");
    izdelaj(nizi, 122, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 123, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 124, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 125, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 126, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 127, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 128, "lopI7aLmulm6jhDpMl7P5g");
    izdelaj(nizi, 129, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 130, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 131, "dmOCNXFGdaUaJWlhkMmOZQR");
    izdelaj(nizi, 132, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 133, "h7u94tnjEQNagCEbxz2IE2jW9nR4lupqo7cT9A9w7mMwk1fCMmbJdIG76_S_");
    izdelaj(nizi, 134, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 135, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 136, "I0dkT86ZQB2cBBvLYzpHiLk1NEiK1Tq7P6OQ8MKZqP2FIG86YYuvy1eb8kUAxgxOiVcIriJOMY");
    izdelaj(nizi, 137, "uMyWgVyLyPesrBi7UqQXvdDeqeX4nYfS9D4MdNdMfMXajCnJerfSy1AQWJYcgHIb3S");
    izdelaj(nizi, 138, "3lRmdkoG6YuRCXhVCu0WumIH");
    izdelaj(nizi, 139, "fS691Z9wxs7vqYw4WuBqVgQhmn4ZlwWzdA0tyy4_pYQj0YFnrQbmp6O26CExNBfpyK");
    izdelaj(nizi, 140, "zIoTnkMpbOD33BDeDkhBF8LGM");
    izdelaj(nizi, 141, "D0302c0ELGjVmEkNPAEIMSh0OWgpqgGw2aIijUmSO");
    izdelaj(nizi, 142, "zyPaUZNN9S_lTqxt8d0Oi");

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
