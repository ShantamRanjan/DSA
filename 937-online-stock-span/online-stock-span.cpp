class StockSpanner {
private:
    // Stack stores pairs: {price, span}
    stack<pair<int, int>> st;

public:
    StockSpanner() {
        // Constructor
    }

    int next(int price) {
        int span = 1;

        // Pop all smaller or equal prices
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        // Push current price and its span
        st.push({price, span});

        return span;
    }
};
