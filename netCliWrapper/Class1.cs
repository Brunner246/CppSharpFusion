namespace netCliWrapper {
  public class Class1 {
    public string GetHello() {
      var wrapper = new clrWrapper.BusinessLogicWrapper();
      return wrapper.GetMessage();
    }
  }
}
