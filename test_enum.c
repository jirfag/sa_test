enum tt {
    TT_OK,
    TT_FAIL,
    TT_TEMP_FAIL,

    TT_TEMP_LAST
};

const char *tt2str(enum tt t) {
    const char *map[] = {
        [TT_OK] = "ok",
        [TT_TEMP_FAIL] = "temp fail",
    };
    return map[t];
}


const char *tt2str_fixed_size(enum tt t) {
    const char *map[TT_TEMP_LAST] = {
        [TT_OK] = "ok",
        [TT_FAIL] = "temp fail",
    };
    return map[t];
}

int main() {
    return 0;
}
