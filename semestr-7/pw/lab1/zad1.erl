-module(zad1).

-compile(export_all).

%2
dopasowanie(X, Y) -> X == Y.

%3
mniejsza(X, Y) ->
    if X < Y -> X;
       true -> Y
    end.

wartosc_bezwgledna(X) ->
    if X < 0 -> X * -1;
       true -> X
    end.

trzeci(L) ->
    if length(L) < 3 ->
           throw("List has to be at least 3 elements long.");
       true ->
           [_ | T1] = L,
           [_ | T2] = T1,
           [H3 | _] = T2,
           H3
    end.

%4
podwoj_elementy([]) -> ok;
podwoj_elementy(L) -> [X * 2 || X <- L].

%5
factorial(1) -> 1;
factorial(N) -> N * factorial(N - 1).

ifactorial(0, R, _) -> R;
ifactorial(N, R, A) -> ifactorial(N - 1, R * A, A + 1).

ifactorial(1) -> 1;
ifactorial(N) -> ifactorial(N, 1, 1).

tail_duplicate(N, Term) -> tail_duplicate(N, Term, []).

tail_duplicate(0, _, L) -> L;
tail_duplicate(N, Term, L) ->
    tail_duplicate(N - 1, Term, [Term | L]).

nalezy(_, []) -> false;
nalezy(H, [H | _]) -> true;
nalezy(E, [_ | T]) -> nalezy(E, T).

