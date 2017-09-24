#include "erl_nif.h"

static ERL_NIF_TERM
fast_compare(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]) {
  int a, b;

  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);

  int result = a == b ? 0 : (a > b ? 1 : -1);
  return enif_make_int(env, result);
}

static ErlNifFunc nif_funcs[] = {
  {"fast_compare", 2, fast_compare}
};

ERL_NIF_INIT(Elixir.FastCompare, nif_funcs, NULL, NULL, NULL, NULL)
