
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {525, 53, 296, 276, 503, 407, 351, 10, 12, 332, 254, 447, 114, 393, 177, 382, 288, 112, 595, 518, 572, 275, 433, 487, 181, 569, 69, 367, 178, 314, 15, 108, 97, 17, 38, 86, 235, 315, 295, 202, 212, 232, 22, 473, 436, 568, 462, 485, 502, 465, 31, 122, 157, 553, 334, 5, 197, 573, 542, 342, 230, 377, 211, 45, 238, 428, 439, 305, 425, 121, 364, 310, 18, 530, 132, 344, 34, 594, 148, 564, 549, 490, 193, 205, 214, 481, 13, 499, 289, 92, 541, 384, 591, 317, 430, 437, 352, 421, 387, 325, 483, 338, 272, 380, 283, 429, 150, 127, 434, 265, 116, 448, 320, 452, 119, 299, 405, 133, 67, 180, 521, 309, 379, 512, 508, 68, 27, 402, 427, 117, 281, 360, 495, 243, 369, 554, 469, 164, 340, 169, 560, 531, 172, 540, 87, 420, 267, 388, 386, 526, 586, 105, 209, 450, 563, 311, 244, 76, 449, 509, 537, 566, 103, 167, 160, 435, 559, 524, 237, 3, 412, 577, 236, 401, 470, 535, 459, 446, 102, 49, 85, 227, 201, 62, 505, 234, 4, 589, 228, 327, 98, 93, 570, 161, 551, 155, 189, 59, 106, 385, 274, 578, 82, 333, 548, 398, 183, 182, 140, 37, 126, 301, 280, 480, 341, 99, 47, 312, 461, 347, 259, 188, 516, 94, 556, 250, 261, 588, 253, 64, 596, 81, 46, 372, 240, 474, 319, 515, 486, 565, 404, 306, 460, 136, 229, 438, 587, 511, 298, 519, 458, 496, 468, 224, 390, 104, 184, 248, 330, 498, 307, 484, 43, 479, 138, 463, 40, 165, 580, 271, 39, 147, 200, 424, 355, 501, 381, 137, 477, 313, 71, 25, 247, 467, 590, 357, 258, 358, 411, 552, 492, 36, 373, 262, 66, 285, 32, 190, 110, 20, 141, 290, 124, 225, 65, 328, 528, 58, 558, 91, 443, 395, 371, 48, 80, 186, 300, 581, 0, 96, 527, 422, 523, 149, 233, 279, 472, 532, 493, 409, 44, 302, 476, 444, 50, 538, 219, 57, 453, 30, 33, 264, 208, 406, 263, 415, 196, 464, 191, 431, 221, 500, 567, 213, 29, 84, 1, 192, 378, 203, 101, 156, 529, 118, 451, 61, 245, 152, 204, 539, 574, 60, 270, 42, 23, 292, 489, 7, 195, 343, 14, 576, 337, 304, 359, 475, 278, 546, 557, 163, 442, 16, 216, 400, 416, 89, 370, 142, 199, 194, 282, 146, 507, 368, 255, 88, 593, 366, 206, 345, 533, 173, 74, 323, 478, 445, 545, 561, 408, 63, 2, 335, 277, 111, 354, 376, 90, 413, 331, 79, 324, 9, 134, 353, 268, 397, 394, 273, 129, 222, 215, 497, 284, 162, 375, 153, 107, 175, 8, 207, 432, 321, 318, 417, 223, 571, 303, 392, 403, 170, 441, 242, 109, 28, 120, 168, 35, 287, 293, 456, 543, 154, 592, 520, 78, 547, 171, 504, 510, 83, 246, 326, 256, 350, 179, 174, 176, 322, 115, 346, 491, 21, 41, 249, 534, 471, 585, 95, 54, 356, 145, 151, 555, 130, 466, 514, 482, 113, 217, 125, 128, 336, 536, 239, 251, 144, 316, 24, 365, 51, 454, 257, 423, 361, 260, 396, 139, 562, 75, 291, 226, 550, 544, 348, 414, 584, 579, 143, 77, 575, 339, 52, 297, 231, 374, 56, 494, 389, 308, 455, 220, 582, 159, 391, 266, 294, 426, 241, 123, 513, 187, 158, 198, 131, 210, 506, 185, 418, 135, 440, 517, 457, 286, 100, 349, 269, 55, 72, 11, 363, 19, 583, 383, 252, 329, 488, 362, 70, 73, 26, 6, 419, 166, 410, 522, 399};
const int NN[] = {396, 553, 32, 381, 130, 366, 500, 254, 114, 476, 390, 175, 119, 400, 446, 337, 411, 320, 399, 365, 286, 501, 353, 322, 227, 440, 121, 152, 102, 80, 382, 434, 421, 112, 295, 13, 474, 186, 285, 82, 280, 46, 433, 520, 394, 135, 109, 174, 555, 168, 108, 379, 76, 391, 50, 407, 59, 100, 297, 208, 596, 7, 301, 568, 486, 331, 222, 328, 376, 309, 451, 443, 595, 226, 495, 263, 38, 522, 386, 210, 455, 491, 161, 398, 341, 326, 393, 356, 552, 591, 52, 359, 419, 581, 324, 273, 567, 335, 546, 279, 350, 453, 200, 14, 467, 79, 586, 402, 268, 463, 405, 8, 527, 318, 180, 20, 88, 243, 305, 85, 257, 91, 343, 536, 217, 425, 367, 507, 413, 133, 25, 101, 471, 136, 539, 266, 456, 160, 33, 3, 187, 550, 236, 339, 499, 2, 165, 557, 278, 139, 362, 429, 37, 432, 131, 395, 229, 34, 207, 125, 143, 185, 380, 524, 537, 397, 513, 260, 515, 276, 74, 72, 319, 146, 543, 584, 170, 107, 272, 465, 481, 588, 578, 211, 514, 240, 503, 26, 253, 532, 387, 317, 517, 566, 582, 311, 327, 342, 150, 475, 355, 11, 193, 444, 308, 199, 62, 201, 560, 315, 27, 290, 71, 246, 264, 325, 485, 371, 242, 464, 498, 228, 316, 430, 426, 458, 484, 73, 224, 238, 596, 490, 462, 270, 404, 78, 96, 144, 176, 506, 255, 528, 441, 469, 64, 129, 70, 336, 110, 51, 403, 585, 293, 556, 442, 283, 505, 298, 44, 54, 58, 179, 473, 83, 340, 28, 212, 435, 19, 147, 202, 388, 274, 354, 84, 151, 576, 164, 504, 48, 310, 569, 511, 287, 6, 192, 330, 378, 173, 159, 41, 235, 42, 43, 439, 357, 97, 98, 116, 572, 531, 492, 508, 250, 428, 493, 75, 542, 123, 384, 162, 89, 60, 502, 549, 4, 141, 583, 525, 352, 562, 277, 361, 526, 372, 313, 592, 544, 249, 345, 436, 124, 171, 375, 31, 77, 347, 573, 417, 15, 17, 138, 140, 593, 479, 445, 189, 120, 93, 9, 188, 145, 418, 480, 314, 214, 53, 570, 195, 333, 338, 244, 291, 67, 321, 377, 438, 209, 548, 575, 349, 230, 39, 22, 487, 373, 346, 10, 155, 406, 177, 55, 57, 65, 203, 547, 477, 494, 241, 167, 284, 288, 47, 282, 545, 92, 574, 172, 385, 551, 247, 267, 113, 204, 104, 289, 410, 245, 183, 415, 348, 401, 132, 149, 510, 153, 56, 158, 206, 45, 296, 538, 137, 448, 29, 489, 541, 323, 302, 564, 233, 332, 369, 213, 580, 142, 416, 424, 117, 516, 99, 95, 590, 103, 292, 450, 127, 535, 12, 182, 134, 422, 0, 561, 94, 457, 225, 216, 368, 412, 497, 460, 265, 178, 521, 237, 86, 358, 262, 303, 231, 563, 166, 454, 148, 389, 577, 466, 128, 205, 587, 472, 184, 221, 49, 470, 459, 523, 299, 196, 21, 275, 232, 519, 414, 154, 488, 437, 334, 1, 420, 105, 294, 281, 35, 251, 256, 452, 312, 68, 427, 219, 579, 565, 496, 87, 300, 181, 61, 122, 223, 248, 111, 156, 307, 370, 169, 198, 344, 36, 261, 220, 374, 191, 478, 329, 363, 540, 594, 269, 30, 157, 190, 81, 23, 197, 534, 163, 558, 571, 259, 383, 509, 16, 40, 66, 90, 306, 512, 239, 589, 449, 106, 360, 126, 482, 234, 408, 554, 215, 24, 392, 258, 483, 431, 271, 5, 18, 447, 118, 518, 252, 304, 468, 409, 115, 529, 364, 530, 69, 351, 63, 559, 533, 423, 194};
const int RANDOM[] = {552, 149, 412, 166, 203, 27, 120, 497, 297, 128, 62, 245, 390, 386, 296, 536, 330, 59, 416, 595, 371, 116, 406, 31, 113, 426, 347, 506, 574, 330, 126, 40, 26, 37, 130, 413, 96, 491, 17, 30, 567, 447, 431, 201, 433, 14, 440, 323, 206, 358, 447, 20, 426, 359, 94, 199, 437, 30, 549, 123, 349, 388, 428, 75, 528, 10, 249, 260, 475, 158, 192, 96, 311, 12, 328, 338, 510, 9, 301, 98, 455, 396, 188, 102, 112, 176, 167, 378, 242, 390, 495, 467, 143, 198, 571, 190, 355, 271, 211, 318, 389, 161, 537, 544, 492, 481, 106, 39, 467, 455, 190, 142, 588, 155, 379, 486, 135, 5, 588, 228, 232, 211, 583, 568, 591, 195, 529, 43, 91, 120, 17, 492, 236, 562, 218, 393, 110, 561, 367, 116, 528, 358, 103, 352, 590, 485, 408, 380, 250, 563, 355, 464, 79, 375, 38, 39, 9, 100, 370, 326, 411, 345, 590, 445, 487, 489, 468, 353, 460, 487, 72, 306, 33, 114, 27, 507, 134, 73, 208, 353, 309, 86, 377, 184, 571, 40, 268, 151, 303, 224, 244, 357, 446, 363, 590, 63, 177, 303, 307, 7, 148, 184, 364, 554, 198, 467, 281, 14, 274, 361, 410, 344, 55, 335, 432, 287, 259, 485, 219, 233, 501, 116, 111, 104, 510, 175, 481, 514, 110, 116, 41, 112, 500, 350, 419, 84, 9, 171, 518, 185, 49, 572, 351, 300, 324, 255, 188, 379, 498, 314, 334, 427, 160, 13, 349, 44, 241, 93, 503, 501, 200, 170, 68, 426, 349, 462, 576, 587, 168, 385, 323, 380, 76, 329, 196, 288, 211, 348, 193, 314, 424, 351, 407, 303, 464, 168, 184, 78, 280, 394, 117, 569, 102, 127, 309, 522, 557, 575, 595, 115, 78, 412, 170, 131, 352, 153, 346, 224, 198, 563, 393, 358, 443, 456, 54, 464, 291, 472, 173, 410, 152, 592, 443, 510, 144, 316, 404, 148, 559, 530, 584, 103, 584, 467, 398, 116, 522, 321, 276, 57, 34, 210, 526, 135, 4, 567, 301, 235, 465, 63, 563, 423, 529, 59, 363, 73, 523, 485, 466, 440, 428, 143, 473, 166, 237, 337, 214, 44, 138, 336, 445, 100, 524, 312, 186, 560, 468, 578, 204, 444, 280, 57, 149, 559, 370, 592, 285, 330, 74, 363, 439, 549, 42, 412, 547, 256, 412, 46, 250, 38, 570, 110, 404, 93, 418, 264, 317, 117, 55, 122, 34, 227, 343, 47, 318, 417, 7, 63, 224, 596, 305, 529, 421, 294, 190, 142, 220, 117, 401, 182, 257, 270, 370, 500, 152, 269, 410, 191, 34, 333, 151, 311, 49, 382, 580, 487, 119, 522, 443, 407, 309, 330, 471, 328, 17, 385, 138, 423, 238, 564, 562, 394, 315, 562, 282, 509, 517, 406, 55, 339, 447, 273, 468, 508, 88, 147, 58, 579, 267, 484, 39, 102, 92, 488, 168, 96, 388, 85, 441, 6, 185, 224, 49, 298, 554, 127, 393, 524, 578, 490, 422, 59, 406, 493, 69, 117, 383, 344, 439, 513, 466, 23, 410, 229, 117, 282, 159, 73, 434, 98, 506, 211, 387, 82, 439, 395, 495, 284, 419, 264, 99, 571, 172, 331, 147, 419, 331, 141, 465, 368, 528, 166, 133, 14, 72, 228, 404, 489, 43, 370, 352, 346, 326, 590, 110, 511, 95, 401, 280, 149, 50, 222, 469, 250, 51, 284, 306, 538, 468, 82, 295, 215, 194, 330, 110, 317, 156, 125, 509, 365, 382, 100, 421, 106, 41, 463, 494, 165, 4, 552, 54, 236, 79, 370, 405, 135};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 218;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->nn = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->nn == v[NN[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}