function populacao(r, x, n)
    populacao = [x]
    for i in 2:n
    x = r*x*(1-x)
    push!(populacao, x)
    end
    println("População final: $(populacao[end])")
    eixo_x = collect(1:n)
    plot(eixo_x, populacao)
    end