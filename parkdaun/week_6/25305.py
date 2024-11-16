n, k = map(int, input().split())
scores = list(map(int, input().split()))

sorted_scores = sorted(scores, reverse=True)

print(sorted_scores[k-1])
