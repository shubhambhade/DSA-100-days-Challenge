function build(s) {
    let c = 0;  
    s = s.split(''); // Convert string to array for in-place modifications

    for (let i = 0; i < s.length; i++) {
        if (s[i] === '#') {
            c = Math.max(0, c - 1);  // Decrease `c` but ensure it doesn't go below 0
        } else {
            s[c] = s[i];  // Overwrite the valid part of the string
            c++;
        }
    }
    return s.slice(0, c).join(''); 
}
var backspaceCompare = function(s, t) {
     return build(s) === build(t);
};

