// breaking outer loops from inside inner loops
// using labels
fn main() {
    let mut count = 0;

    'outer: loop {
        'inner1: loop { 
            if count >= 20 { 
                // this will only break inner1;
                break 'inner1; // `break` can also work
            }

            count += 2; // counter changing clause
        }
        count += 5; // after breaking
        
        'inner2: loop {
            if count >= 30{
                // this breaks the outer loop;
                 break 'outer;
            }

            // to continue outer loop and access count += 5
            // to change value of count with every iter
            continue 'outer;
        }
    }

    assert!(count == 30);
    println!("Success!");
}
