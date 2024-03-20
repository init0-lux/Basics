fn main() {
    let mut sum = 0;

    for i in -3..2 { // -3 to 1
        sum += i
    }

    assert!(sum == -5);

    for c in 'a'..='z' { //prints a to z
        println!("{} {}", c, c as u8); //prints character's ascii value in unsigned 8 form
    }


    /*
     * use std::ops::{Range, RangeInclusive};
     * fn main() {
     * assert_eq!((1..5), Range{ start: 1, end : 5}); // This is the more verbose way to do so. 1 to 4              
     * assert_eq!((1..=5), RangeInclusive::new(1,5)); // 1 to 5
     * }
     */
}
